open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/TextRotateVertical"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/TextRotateVerticalOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/TextRotateVerticalRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/TextRotateVerticalSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/TextRotateVerticalTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
