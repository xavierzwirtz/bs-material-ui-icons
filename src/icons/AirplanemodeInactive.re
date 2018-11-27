open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/AirplanemodeInactive"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/AirplanemodeInactiveOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/AirplanemodeInactiveRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/AirplanemodeInactiveSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/AirplanemodeInactiveTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
