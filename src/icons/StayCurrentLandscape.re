open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/StayCurrentLandscape"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/StayCurrentLandscapeOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/StayCurrentLandscapeRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/StayCurrentLandscapeSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/StayCurrentLandscapeTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
