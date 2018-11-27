open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ShoppingBasket"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ShoppingBasketOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ShoppingBasketRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ShoppingBasketSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ShoppingBasketTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
