open IconProps;

module Filled = {
  [@bs.module "@material-ui/icons/AddPhotoAlternate"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Outlined = {
  [@bs.module "@material-ui/icons/AddPhotoAlternateOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Rounded = {
  [@bs.module "@material-ui/icons/AddPhotoAlternateRounded"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Sharp = {
  [@bs.module "@material-ui/icons/AddPhotoAlternateSharp"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module TwoTone = {
  [@bs.module "@material-ui/icons/AddPhotoAlternateTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};
