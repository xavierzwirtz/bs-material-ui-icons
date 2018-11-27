open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PeopleOutline"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PeopleOutlineOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PeopleOutlineRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PeopleOutlineSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PeopleOutlineTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
