open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/KeyboardArrowLeft"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/KeyboardArrowLeftOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/KeyboardArrowLeftRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/KeyboardArrowLeftSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/KeyboardArrowLeftTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
