open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/Comment"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/CommentOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/CommentRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/CommentSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/CommentTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
