open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/UnfoldLess"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/UnfoldLessOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/UnfoldLessRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/UnfoldLessSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/UnfoldLessTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
