open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ArrowRightAlt"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ArrowRightAltOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ArrowRightAltRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ArrowRightAltSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ArrowRightAltTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
