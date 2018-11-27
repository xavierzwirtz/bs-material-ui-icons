open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/TextRotationNone"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/TextRotationNoneOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/TextRotationNoneRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/TextRotationNoneSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/TextRotationNoneTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
