open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/DirectionsRailway"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/DirectionsRailwayOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/DirectionsRailwayRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/DirectionsRailwaySharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/DirectionsRailwayTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
