open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/VerticalAlignBottom"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/VerticalAlignBottomOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/VerticalAlignBottomRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/VerticalAlignBottomSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/VerticalAlignBottomTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
