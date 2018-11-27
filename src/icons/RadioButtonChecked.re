open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/RadioButtonChecked"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/RadioButtonCheckedOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/RadioButtonCheckedRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/RadioButtonCheckedSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/RadioButtonCheckedTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
