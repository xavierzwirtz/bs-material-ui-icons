open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/AirlineSeatLegroomNormal"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/AirlineSeatLegroomNormalOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/AirlineSeatLegroomNormalRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/AirlineSeatLegroomNormalSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/AirlineSeatLegroomNormalTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
