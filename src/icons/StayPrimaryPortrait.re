open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/StayPrimaryPortrait"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/StayPrimaryPortraitOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/StayPrimaryPortraitRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/StayPrimaryPortraitSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/StayPrimaryPortraitTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
