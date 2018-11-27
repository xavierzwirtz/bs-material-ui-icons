open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/EnhancedEncryption"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/EnhancedEncryptionOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/EnhancedEncryptionRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/EnhancedEncryptionSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/EnhancedEncryptionTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
