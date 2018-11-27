open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/AddPhotoAlternate"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/AddPhotoAlternateOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/AddPhotoAlternateRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/AddPhotoAlternateSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/AddPhotoAlternateTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
