open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/FiberManualRecord"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/FiberManualRecordOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/FiberManualRecordRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/FiberManualRecordSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/FiberManualRecordTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
