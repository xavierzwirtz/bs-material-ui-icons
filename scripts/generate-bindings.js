const icons = require('@material-ui/icons');
const fs = require('fs');
const os = require('os');

Object.keys(icons).map(icon => {
  const contents = `
[@bs.module "@material-ui/icons/${icon}"] external reactClass : ReasonReact.reactClass = "default";
let make = (children) =>
  ReasonReact.wrapJsForReason(~reactClass, ~props=Js.Obj.empty(), children);
`;
  fs.writeFileSync('./src/' + icon + '.re', contents);
});
