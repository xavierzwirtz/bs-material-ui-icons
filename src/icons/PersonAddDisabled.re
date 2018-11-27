open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PersonAddDisabled"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PersonAddDisabledOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PersonAddDisabledRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PersonAddDisabledSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PersonAddDisabledTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
