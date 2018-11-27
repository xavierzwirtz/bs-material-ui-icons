open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/RecordVoiceOver"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/RecordVoiceOverOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/RecordVoiceOverRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/RecordVoiceOverSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/RecordVoiceOverTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
