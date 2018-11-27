open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SlowMotionVideo"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SlowMotionVideoOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SlowMotionVideoRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SlowMotionVideoSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SlowMotionVideoTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
