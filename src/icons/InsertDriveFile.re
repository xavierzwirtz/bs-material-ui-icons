open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/InsertDriveFile"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/InsertDriveFileOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/InsertDriveFileRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/InsertDriveFileSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/InsertDriveFileTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
