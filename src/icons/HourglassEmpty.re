open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/HourglassEmpty"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/HourglassEmptyOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/HourglassEmptyRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/HourglassEmptySharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/HourglassEmptyTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
