open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/FormatTextdirectionLToR"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/FormatTextdirectionLToROutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/FormatTextdirectionLToRRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/FormatTextdirectionLToRSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/FormatTextdirectionLToRTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
