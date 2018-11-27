open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/BrandingWatermark"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/BrandingWatermarkOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/BrandingWatermarkRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/BrandingWatermarkSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/BrandingWatermarkTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
