open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/KeyboardBackspace"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/KeyboardBackspaceOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/KeyboardBackspaceRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/KeyboardBackspaceSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/KeyboardBackspaceTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
