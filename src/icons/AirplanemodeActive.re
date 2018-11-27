open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/AirplanemodeActive"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/AirplanemodeActiveOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/AirplanemodeActiveRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/AirplanemodeActiveSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/AirplanemodeActiveTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
