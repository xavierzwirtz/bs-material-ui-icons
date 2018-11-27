open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/CloudDownload"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/CloudDownloadOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/CloudDownloadRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/CloudDownloadSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/CloudDownloadTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
