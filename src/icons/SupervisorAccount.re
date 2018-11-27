open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SupervisorAccount"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SupervisorAccountOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SupervisorAccountRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SupervisorAccountSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SupervisorAccountTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
