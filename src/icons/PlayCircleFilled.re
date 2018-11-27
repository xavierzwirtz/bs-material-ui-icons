open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PlayCircleFilled"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PlayCircleFilledOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PlayCircleFilledRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PlayCircleFilledSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PlayCircleFilledTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
