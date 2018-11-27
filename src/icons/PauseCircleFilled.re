open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PauseCircleFilled"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PauseCircleFilledOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PauseCircleFilledRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PauseCircleFilledSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PauseCircleFilledTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
