open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/MarkunreadMailbox"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/MarkunreadMailboxOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/MarkunreadMailboxRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/MarkunreadMailboxSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/MarkunreadMailboxTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
