open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/InsertEmoticon"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/InsertEmoticonOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/InsertEmoticonRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/InsertEmoticonSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/InsertEmoticonTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
