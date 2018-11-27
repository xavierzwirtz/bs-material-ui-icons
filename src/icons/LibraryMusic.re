open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/LibraryMusic"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/LibraryMusicOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/LibraryMusicRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/LibraryMusicSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/LibraryMusicTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
