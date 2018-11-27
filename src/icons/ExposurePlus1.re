open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ExposurePlus1"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ExposurePlus1Outlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ExposurePlus1Rounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ExposurePlus1Sharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ExposurePlus1TwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
