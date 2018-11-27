open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ClosedCaption"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ClosedCaptionOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ClosedCaptionRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ClosedCaptionSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ClosedCaptionTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
