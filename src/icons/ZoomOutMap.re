open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ZoomOutMap"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ZoomOutMapOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ZoomOutMapRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ZoomOutMapSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ZoomOutMapTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
