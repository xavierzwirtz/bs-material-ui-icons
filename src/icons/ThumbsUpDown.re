open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ThumbsUpDown"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ThumbsUpDownOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ThumbsUpDownRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ThumbsUpDownSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ThumbsUpDownTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
