open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/LaptopChromebook"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/LaptopChromebookOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/LaptopChromebookRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/LaptopChromebookSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/LaptopChromebookTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
