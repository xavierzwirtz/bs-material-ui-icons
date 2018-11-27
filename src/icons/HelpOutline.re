open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/HelpOutline"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/HelpOutlineOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/HelpOutlineRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/HelpOutlineSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/HelpOutlineTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
