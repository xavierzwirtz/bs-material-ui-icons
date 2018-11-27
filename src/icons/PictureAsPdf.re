open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PictureAsPdf"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PictureAsPdfOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PictureAsPdfRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PictureAsPdfSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PictureAsPdfTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
