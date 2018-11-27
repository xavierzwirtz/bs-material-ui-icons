open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/FreeBreakfast"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/FreeBreakfastOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/FreeBreakfastRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/FreeBreakfastSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/FreeBreakfastTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
