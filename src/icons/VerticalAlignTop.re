open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/VerticalAlignTop"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/VerticalAlignTopOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/VerticalAlignTopRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/VerticalAlignTopSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/VerticalAlignTopTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
