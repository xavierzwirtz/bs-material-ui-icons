open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PhoneBluetoothSpeaker"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PhoneBluetoothSpeakerOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PhoneBluetoothSpeakerRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PhoneBluetoothSpeakerSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PhoneBluetoothSpeakerTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
