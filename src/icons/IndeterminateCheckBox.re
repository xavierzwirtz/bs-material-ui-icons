open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/IndeterminateCheckBox"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/IndeterminateCheckBoxOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/IndeterminateCheckBoxRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/IndeterminateCheckBoxSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/IndeterminateCheckBoxTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
