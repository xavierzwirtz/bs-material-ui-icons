open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/LocalConvenienceStore"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/LocalConvenienceStoreOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/LocalConvenienceStoreRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/LocalConvenienceStoreSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/LocalConvenienceStoreTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
