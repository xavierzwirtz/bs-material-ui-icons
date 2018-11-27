open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/NotificationsOff"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/NotificationsOffOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/NotificationsOffRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/NotificationsOffSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/NotificationsOffTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
