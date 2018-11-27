open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/FeaturedPlayList"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/FeaturedPlayListOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/FeaturedPlayListRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/FeaturedPlayListSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/FeaturedPlayListTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
