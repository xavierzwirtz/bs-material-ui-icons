open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SettingsRemote"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SettingsRemoteOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SettingsRemoteRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SettingsRemoteSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SettingsRemoteTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
