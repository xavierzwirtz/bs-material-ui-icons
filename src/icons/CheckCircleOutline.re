open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/CheckCircleOutline"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/CheckCircleOutlineOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/CheckCircleOutlineRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/CheckCircleOutlineSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/CheckCircleOutlineTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
