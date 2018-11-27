open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/FilterTiltShift"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/FilterTiltShiftOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/FilterTiltShiftRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/FilterTiltShiftSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/FilterTiltShiftTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
