open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SignalCellularAlt"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SignalCellularAltOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SignalCellularAltRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SignalCellularAltSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SignalCellularAltTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
