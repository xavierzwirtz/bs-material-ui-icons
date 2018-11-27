open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ArrowDropDown"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ArrowDropDownOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ArrowDropDownRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ArrowDropDownSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ArrowDropDownTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
