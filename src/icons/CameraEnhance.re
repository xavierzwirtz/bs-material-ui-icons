open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/CameraEnhance"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/CameraEnhanceOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/CameraEnhanceRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/CameraEnhanceSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/CameraEnhanceTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
