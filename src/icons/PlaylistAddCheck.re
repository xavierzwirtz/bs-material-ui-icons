open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PlaylistAddCheck"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PlaylistAddCheckOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PlaylistAddCheckRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PlaylistAddCheckSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PlaylistAddCheckTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
