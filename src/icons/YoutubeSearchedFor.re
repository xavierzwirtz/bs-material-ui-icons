open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/YoutubeSearchedFor"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/YoutubeSearchedForOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/YoutubeSearchedForRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/YoutubeSearchedForSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/YoutubeSearchedForTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
