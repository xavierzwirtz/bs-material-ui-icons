open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/RestoreFromTrash"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/RestoreFromTrashOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/RestoreFromTrashRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/RestoreFromTrashSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/RestoreFromTrashTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
