open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SentimentDissatisfied"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SentimentDissatisfiedOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SentimentDissatisfiedRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SentimentDissatisfiedSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SentimentDissatisfiedTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
