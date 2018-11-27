open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/BatteryCharging50"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/BatteryCharging50Outlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/BatteryCharging50Rounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/BatteryCharging50Sharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/BatteryCharging50TwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
