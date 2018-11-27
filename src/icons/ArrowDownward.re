open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ArrowDownward"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ArrowDownwardOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ArrowDownwardRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ArrowDownwardSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ArrowDownwardTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
