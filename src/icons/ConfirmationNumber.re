open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ConfirmationNumber"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ConfirmationNumberOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ConfirmationNumberRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ConfirmationNumberSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ConfirmationNumberTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
