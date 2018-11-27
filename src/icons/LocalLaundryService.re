open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/LocalLaundryService"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/LocalLaundryServiceOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/LocalLaundryServiceRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/LocalLaundryServiceSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/LocalLaundryServiceTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
