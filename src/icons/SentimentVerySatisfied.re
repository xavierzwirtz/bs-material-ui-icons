open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SentimentVerySatisfied"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SentimentVerySatisfiedOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SentimentVerySatisfiedRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SentimentVerySatisfiedSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SentimentVerySatisfiedTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
