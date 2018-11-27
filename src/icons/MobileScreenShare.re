open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/MobileScreenShare"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/MobileScreenShareOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/MobileScreenShareRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/MobileScreenShareSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/MobileScreenShareTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
