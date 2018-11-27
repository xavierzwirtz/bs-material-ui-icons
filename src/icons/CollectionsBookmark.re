open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/CollectionsBookmark"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/CollectionsBookmarkOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/CollectionsBookmarkRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/CollectionsBookmarkSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/CollectionsBookmarkTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
