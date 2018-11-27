open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/DirectionsWalk"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/DirectionsWalkOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/DirectionsWalkRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/DirectionsWalkSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/DirectionsWalkTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
