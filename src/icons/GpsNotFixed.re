open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/GpsNotFixed"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/GpsNotFixedOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/GpsNotFixedRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/GpsNotFixedSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/GpsNotFixedTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
