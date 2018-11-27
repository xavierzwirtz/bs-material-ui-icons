open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PanoramaHorizontal"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PanoramaHorizontalOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PanoramaHorizontalRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PanoramaHorizontalSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PanoramaHorizontalTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
