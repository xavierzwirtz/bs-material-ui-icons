open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SignalWifi3Bar"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SignalWifi3BarOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SignalWifi3BarRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SignalWifi3BarSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SignalWifi3BarTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
