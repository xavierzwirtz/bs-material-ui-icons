open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/BookmarkBorder"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/BookmarkBorderOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/BookmarkBorderRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/BookmarkBorderSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/BookmarkBorderTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
