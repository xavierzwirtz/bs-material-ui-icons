open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SentimentSatisfied"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SentimentSatisfiedOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SentimentSatisfiedRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SentimentSatisfiedSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SentimentSatisfiedTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
