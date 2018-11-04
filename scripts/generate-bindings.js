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

  const header = 'open IconProps;\n';
  const contents = variants.reduce(
    (c, [importName, moduleName]) => `${c}
module ${moduleName} = {
  [@bs.module "@material-ui/icons/${importName}"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};
`,
    header,
  );

  return fs.writeFileSync(`./src/icons/${icon}.re`, contents);
});
