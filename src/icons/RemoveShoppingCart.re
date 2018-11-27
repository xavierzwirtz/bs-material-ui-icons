open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/RemoveShoppingCart"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/RemoveShoppingCartOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/RemoveShoppingCartRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/RemoveShoppingCartSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/RemoveShoppingCartTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
