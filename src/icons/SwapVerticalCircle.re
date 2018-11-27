open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SwapVerticalCircle"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SwapVerticalCircleOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SwapVerticalCircleRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SwapVerticalCircleSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SwapVerticalCircleTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
