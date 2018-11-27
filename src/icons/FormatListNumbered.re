open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/FormatListNumbered"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/FormatListNumberedOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/FormatListNumberedRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/FormatListNumberedSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/FormatListNumberedTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
