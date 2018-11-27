open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/TransferWithinAStation"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/TransferWithinAStationOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/TransferWithinAStationRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/TransferWithinAStationSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/TransferWithinAStationTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
