open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/CallMissedOutgoing"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/CallMissedOutgoingOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/CallMissedOutgoingRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/CallMissedOutgoingSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/CallMissedOutgoingTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
