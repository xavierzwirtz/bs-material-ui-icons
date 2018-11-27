open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/QueryBuilder"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/QueryBuilderOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/QueryBuilderRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/QueryBuilderSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/QueryBuilderTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
