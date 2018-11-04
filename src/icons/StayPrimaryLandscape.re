open IconProps;

module Filled = {
  [@bs.module "@material-ui/icons/StayPrimaryLandscape"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Outlined = {
  [@bs.module "@material-ui/icons/StayPrimaryLandscapeOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Rounded = {
  [@bs.module "@material-ui/icons/StayPrimaryLandscapeRounded"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Sharp = {
  [@bs.module "@material-ui/icons/StayPrimaryLandscapeSharp"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module TwoTone = {
  [@bs.module "@material-ui/icons/StayPrimaryLandscapeTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};
