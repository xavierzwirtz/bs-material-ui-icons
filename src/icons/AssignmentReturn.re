open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/AssignmentReturn"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/AssignmentReturnOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/AssignmentReturnRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/AssignmentReturnSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/AssignmentReturnTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
