open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/BluetoothSearching"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/BluetoothSearchingOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/BluetoothSearchingRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/BluetoothSearchingSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/BluetoothSearchingTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
