open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/AirlineSeatFlatAngled"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/AirlineSeatFlatAngledOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/AirlineSeatFlatAngledRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/AirlineSeatFlatAngledSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/AirlineSeatFlatAngledTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
