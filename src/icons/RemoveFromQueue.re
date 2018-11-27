open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/RemoveFromQueue"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/RemoveFromQueueOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/RemoveFromQueueRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/RemoveFromQueueSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/RemoveFromQueueTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
