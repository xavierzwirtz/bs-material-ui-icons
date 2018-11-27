open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/NotificationsNone"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/NotificationsNoneOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/NotificationsNoneRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/NotificationsNoneSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/NotificationsNoneTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
