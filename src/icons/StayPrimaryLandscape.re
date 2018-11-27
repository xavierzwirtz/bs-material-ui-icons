open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/StayPrimaryLandscape"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/StayPrimaryLandscapeOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/StayPrimaryLandscapeRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/StayPrimaryLandscapeSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/StayPrimaryLandscapeTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
