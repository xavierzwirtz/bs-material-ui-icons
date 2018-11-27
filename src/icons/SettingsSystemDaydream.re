open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SettingsSystemDaydream"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SettingsSystemDaydreamOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SettingsSystemDaydreamRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SettingsSystemDaydreamSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SettingsSystemDaydreamTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
