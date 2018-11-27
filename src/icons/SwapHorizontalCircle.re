open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SwapHorizontalCircle"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SwapHorizontalCircleOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SwapHorizontalCircleRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SwapHorizontalCircleSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SwapHorizontalCircleTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
