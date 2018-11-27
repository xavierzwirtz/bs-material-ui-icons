open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/BluetoothAudio"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/BluetoothAudioOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/BluetoothAudioRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/BluetoothAudioSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/BluetoothAudioTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
