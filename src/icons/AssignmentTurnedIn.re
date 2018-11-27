open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/AssignmentTurnedIn"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/AssignmentTurnedInOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/AssignmentTurnedInRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/AssignmentTurnedInSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/AssignmentTurnedInTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
