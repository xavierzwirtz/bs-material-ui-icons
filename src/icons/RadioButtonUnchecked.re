open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/RadioButtonUnchecked"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/RadioButtonUncheckedOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/RadioButtonUncheckedRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/RadioButtonUncheckedSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/RadioButtonUncheckedTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
