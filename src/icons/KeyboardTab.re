open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/KeyboardTab"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/KeyboardTabOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/KeyboardTabRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/KeyboardTabSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/KeyboardTabTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
