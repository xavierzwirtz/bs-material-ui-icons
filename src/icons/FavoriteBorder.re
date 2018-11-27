open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/FavoriteBorder"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/FavoriteBorderOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/FavoriteBorderRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/FavoriteBorderSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/FavoriteBorderTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
