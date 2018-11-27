open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PanoramaWideAngle"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PanoramaWideAngleOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PanoramaWideAngleRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PanoramaWideAngleSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PanoramaWideAngleTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
