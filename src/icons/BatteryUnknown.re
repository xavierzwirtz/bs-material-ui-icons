open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/BatteryUnknown"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/BatteryUnknownOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/BatteryUnknownRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/BatteryUnknownSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/BatteryUnknownTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
