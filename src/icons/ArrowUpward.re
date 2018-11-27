open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ArrowUpward"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ArrowUpwardOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ArrowUpwardRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ArrowUpwardSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ArrowUpwardTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
