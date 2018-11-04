open IconProps;

module Filled = {
  [@bs.module "@material-ui/icons/PhotoSizeSelectLarge"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Outlined = {
  [@bs.module "@material-ui/icons/PhotoSizeSelectLargeOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Rounded = {
  [@bs.module "@material-ui/icons/PhotoSizeSelectLargeRounded"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Sharp = {
  [@bs.module "@material-ui/icons/PhotoSizeSelectLargeSharp"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module TwoTone = {
  [@bs.module "@material-ui/icons/PhotoSizeSelectLargeTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};
