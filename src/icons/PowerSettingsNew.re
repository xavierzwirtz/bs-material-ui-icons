open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PowerSettingsNew"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PowerSettingsNewOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PowerSettingsNewRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PowerSettingsNewSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PowerSettingsNewTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
