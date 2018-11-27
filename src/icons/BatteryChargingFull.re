open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/BatteryChargingFull"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/BatteryChargingFullOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/BatteryChargingFullRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/BatteryChargingFullSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/BatteryChargingFullTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
