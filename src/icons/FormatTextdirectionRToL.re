open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/FormatTextdirectionRToL"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/FormatTextdirectionRToLOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/FormatTextdirectionRToLRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/FormatTextdirectionRToLSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/FormatTextdirectionRToLTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
