open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SupervisedUserCircle"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SupervisedUserCircleOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SupervisedUserCircleRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SupervisedUserCircleSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SupervisedUserCircleTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
