open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ScreenLockLandscape"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ScreenLockLandscapeOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ScreenLockLandscapeRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ScreenLockLandscapeSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ScreenLockLandscapeTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
