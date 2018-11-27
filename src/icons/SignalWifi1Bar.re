open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SignalWifi1Bar"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SignalWifi1BarOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SignalWifi1BarRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SignalWifi1BarSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SignalWifi1BarTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
