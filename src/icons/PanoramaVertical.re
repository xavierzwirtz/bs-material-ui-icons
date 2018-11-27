open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PanoramaVertical"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PanoramaVerticalOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PanoramaVerticalRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PanoramaVerticalSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PanoramaVerticalTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
