open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/TabletAndroid"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/TabletAndroidOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/TabletAndroidRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/TabletAndroidSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/TabletAndroidTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
