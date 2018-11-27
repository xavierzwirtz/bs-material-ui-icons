open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/BatteryCharging30"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/BatteryCharging30Outlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/BatteryCharging30Rounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/BatteryCharging30Sharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/BatteryCharging30TwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
