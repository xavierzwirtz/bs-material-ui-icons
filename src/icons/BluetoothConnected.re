open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/BluetoothConnected"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/BluetoothConnectedOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/BluetoothConnectedRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/BluetoothConnectedSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/BluetoothConnectedTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
