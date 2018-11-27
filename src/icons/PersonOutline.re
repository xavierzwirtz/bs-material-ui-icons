open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PersonOutline"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PersonOutlineOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PersonOutlineRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PersonOutlineSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PersonOutlineTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
