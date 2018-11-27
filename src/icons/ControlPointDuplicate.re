open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ControlPointDuplicate"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ControlPointDuplicateOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ControlPointDuplicateRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ControlPointDuplicateSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ControlPointDuplicateTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
