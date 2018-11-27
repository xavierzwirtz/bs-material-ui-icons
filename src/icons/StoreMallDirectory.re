open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/StoreMallDirectory"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/StoreMallDirectoryOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/StoreMallDirectoryRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/StoreMallDirectorySharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/StoreMallDirectoryTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
