open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/QuestionAnswer"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/QuestionAnswerOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/QuestionAnswerRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/QuestionAnswerSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/QuestionAnswerTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
