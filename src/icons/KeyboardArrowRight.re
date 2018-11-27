open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/KeyboardArrowRight"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/KeyboardArrowRightOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/KeyboardArrowRightRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/KeyboardArrowRightSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/KeyboardArrowRightTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
