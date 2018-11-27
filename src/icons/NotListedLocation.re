open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/NotListedLocation"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/NotListedLocationOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/NotListedLocationRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/NotListedLocationSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/NotListedLocationTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
