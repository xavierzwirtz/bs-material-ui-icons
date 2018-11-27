open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/MonochromePhotos"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/MonochromePhotosOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/MonochromePhotosRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/MonochromePhotosSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/MonochromePhotosTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
