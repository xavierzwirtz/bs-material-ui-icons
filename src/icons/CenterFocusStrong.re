open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/CenterFocusStrong"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/CenterFocusStrongOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/CenterFocusStrongRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/CenterFocusStrongSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/CenterFocusStrongTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
