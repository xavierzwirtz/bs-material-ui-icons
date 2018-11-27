open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/FormatLineSpacing"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/FormatLineSpacingOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/FormatLineSpacingRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/FormatLineSpacingSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/FormatLineSpacingTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
