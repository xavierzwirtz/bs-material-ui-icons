open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectLarge"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectLargeOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectLargeRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectLargeSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectLargeTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
