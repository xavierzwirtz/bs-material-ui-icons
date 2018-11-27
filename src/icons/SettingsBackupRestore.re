open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SettingsBackupRestore"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SettingsBackupRestoreOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SettingsBackupRestoreRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SettingsBackupRestoreSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SettingsBackupRestoreTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
