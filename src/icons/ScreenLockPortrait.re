open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ScreenLockPortrait"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ScreenLockPortraitOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ScreenLockPortraitRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ScreenLockPortraitSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ScreenLockPortraitTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
