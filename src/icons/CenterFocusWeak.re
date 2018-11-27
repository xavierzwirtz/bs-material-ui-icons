open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/CenterFocusWeak"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/CenterFocusWeakOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/CenterFocusWeakRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/CenterFocusWeakSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/CenterFocusWeakTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
