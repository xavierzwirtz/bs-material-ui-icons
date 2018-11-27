open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SentimentSatisfiedAlt"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SentimentSatisfiedAltOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SentimentSatisfiedAltRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SentimentSatisfiedAltSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SentimentSatisfiedAltTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
