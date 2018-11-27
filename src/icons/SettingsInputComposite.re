open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SettingsInputComposite"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SettingsInputCompositeOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SettingsInputCompositeRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SettingsInputCompositeSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SettingsInputCompositeTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
