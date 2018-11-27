open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/QueuePlayNext"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/QueuePlayNextOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/QueuePlayNextRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/QueuePlayNextSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/QueuePlayNextTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
