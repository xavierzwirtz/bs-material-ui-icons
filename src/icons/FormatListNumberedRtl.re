open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/FormatListNumberedRtl"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/FormatListNumberedRtlOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/FormatListNumberedRtlRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/FormatListNumberedRtlSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/FormatListNumberedRtlTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
