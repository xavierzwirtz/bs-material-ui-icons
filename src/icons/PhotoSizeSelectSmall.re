open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectSmall"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectSmallOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectSmallRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectSmallSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectSmallTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
