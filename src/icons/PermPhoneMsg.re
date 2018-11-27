open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PermPhoneMsg"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PermPhoneMsgOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PermPhoneMsgRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PermPhoneMsgSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PermPhoneMsgTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
