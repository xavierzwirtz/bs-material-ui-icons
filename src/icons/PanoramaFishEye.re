open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PanoramaFishEye"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PanoramaFishEyeOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PanoramaFishEyeRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PanoramaFishEyeSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PanoramaFishEyeTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
