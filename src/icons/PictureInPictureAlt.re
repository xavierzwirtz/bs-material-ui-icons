open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PictureInPictureAlt"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PictureInPictureAltOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PictureInPictureAltRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PictureInPictureAltSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PictureInPictureAltTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
