open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/AirlineSeatReclineExtra"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/AirlineSeatReclineExtraOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/AirlineSeatReclineExtraRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/AirlineSeatReclineExtraSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/AirlineSeatReclineExtraTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
