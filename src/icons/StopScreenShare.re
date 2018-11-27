open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/StopScreenShare"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/StopScreenShareOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/StopScreenShareRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/StopScreenShareSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/StopScreenShareTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
