open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SignalCellular2Bar"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SignalCellular2BarOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SignalCellular2BarRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SignalCellular2BarSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SignalCellular2BarTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
