open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/TextRotateUp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/TextRotateUpOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/TextRotateUpRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/TextRotateUpSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/TextRotateUpTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
