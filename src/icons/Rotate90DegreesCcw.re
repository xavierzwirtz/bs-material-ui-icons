open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/Rotate90DegreesCcw"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/Rotate90DegreesCcwOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/Rotate90DegreesCcwRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/Rotate90DegreesCcwSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/Rotate90DegreesCcwTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
