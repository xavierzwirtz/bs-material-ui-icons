open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ViewHeadline"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ViewHeadlineOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ViewHeadlineRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ViewHeadlineSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ViewHeadlineTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
