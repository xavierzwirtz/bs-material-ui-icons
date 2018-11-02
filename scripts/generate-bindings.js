const icons = require('@material-ui/icons');
const fs = require('fs');
const os = require('os');

const contents = Object.keys(icons)
  .map(
    icon => `module ${icon} = {
  [@bs.module "@material-ui/icons/${icon}"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj] external makeProps: (~className: string=?, unit) => _ = "";
  let make = (~className: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~className?, ()),
      children,
    );
};`,
  )
  .join(`${os.EOL}${os.EOL}`);

fs.writeFileSync('./src/MaterialUiIcons.re', contents);
