open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SignalCellularNull"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SignalCellularNullOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SignalCellularNullRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SignalCellularNullSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SignalCellularNullTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
