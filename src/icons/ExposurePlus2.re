open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ExposurePlus2"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ExposurePlus2Outlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ExposurePlus2Rounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ExposurePlus2Sharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ExposurePlus2TwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
