open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ImageAspectRatio"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ImageAspectRatioOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ImageAspectRatioRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ImageAspectRatioSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ImageAspectRatioTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
