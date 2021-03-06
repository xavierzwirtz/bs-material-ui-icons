open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/RestaurantMenu"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/RestaurantMenuOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/RestaurantMenuRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/RestaurantMenuSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/RestaurantMenuTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
