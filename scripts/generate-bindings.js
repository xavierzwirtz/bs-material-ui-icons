const icons = require('@material-ui/icons');
const fs = require('fs');
const os = require('os');

const variants = ['Outlined', 'Rounded', 'TwoTone', 'Sharp'];

const groupedIcons = Object.keys(icons).reduce((acc, value) => {
  const variant = variants.find(v => value.endsWith(v));
  const iconName = variant
    ? value.substring(0, value.length - variant.length)
    : value;
  const variantName = variant ? variant : 'Filled';

  acc[iconName] = acc[iconName] || [];
  acc[iconName].push([value, variantName]);

  return acc;
}, {});

Object.keys(groupedIcons).map(icon => {
  const variants = groupedIcons[icon];

  const contents = variants
    .map(
      ([importName, moduleName]) => `
module ${moduleName} = {
  [@bs.module "@material-ui/icons/${importName}"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj] external makeProps: (~className: string=?, unit) => _ = "";
  let make = (~className: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~className?, ()),
      children,
    );
};
`,
    )
    .join('');

  return fs.writeFileSync(`./src/${icon}.re`, contents);
});
