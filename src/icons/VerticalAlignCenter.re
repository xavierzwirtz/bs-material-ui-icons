open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/VerticalAlignCenter"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/VerticalAlignCenterOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/VerticalAlignCenterRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/VerticalAlignCenterSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/VerticalAlignCenterTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
