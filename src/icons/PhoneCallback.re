open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PhoneCallback"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PhoneCallbackOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PhoneCallbackRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PhoneCallbackSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PhoneCallbackTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
