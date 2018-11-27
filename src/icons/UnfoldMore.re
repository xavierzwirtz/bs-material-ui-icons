open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/UnfoldMore"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/UnfoldMoreOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/UnfoldMoreRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/UnfoldMoreSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/UnfoldMoreTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
