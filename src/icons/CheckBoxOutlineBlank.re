open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/CheckBoxOutlineBlank"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/CheckBoxOutlineBlankOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/CheckBoxOutlineBlankRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/CheckBoxOutlineBlankSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/CheckBoxOutlineBlankTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
