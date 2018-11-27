open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/OutlinedFlag"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/OutlinedFlagOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/OutlinedFlagRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/OutlinedFlagSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/OutlinedFlagTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
