open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PlayCircleFilledWhite"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PlayCircleFilledWhiteOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PlayCircleFilledWhiteRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PlayCircleFilledWhiteSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PlayCircleFilledWhiteTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
