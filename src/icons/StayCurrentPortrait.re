open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/StayCurrentPortrait"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/StayCurrentPortraitOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/StayCurrentPortraitRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/StayCurrentPortraitSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/StayCurrentPortraitTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
