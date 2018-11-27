open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PauseCircleOutline"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PauseCircleOutlineOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PauseCircleOutlineRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PauseCircleOutlineSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PauseCircleOutlineTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
