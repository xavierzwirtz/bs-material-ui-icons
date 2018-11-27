open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectActual"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectActualOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectActualRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectActualSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PhotoSizeSelectActualTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
