open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/FiberSmartRecord"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/FiberSmartRecordOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/FiberSmartRecordRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/FiberSmartRecordSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/FiberSmartRecordTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
