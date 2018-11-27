open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/NoMeetingRoom"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/NoMeetingRoomOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/NoMeetingRoomRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/NoMeetingRoomSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/NoMeetingRoomTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
