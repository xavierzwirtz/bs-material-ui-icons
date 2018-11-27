open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/AddAPhoto"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/AddAPhotoOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/AddAPhotoRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/AddAPhotoSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/AddAPhotoTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
