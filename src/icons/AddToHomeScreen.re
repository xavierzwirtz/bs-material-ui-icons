open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/AddToHomeScreen"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/AddToHomeScreenOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/AddToHomeScreenRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/AddToHomeScreenSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/AddToHomeScreenTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
