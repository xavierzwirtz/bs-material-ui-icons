open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/LaptopWindows"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/LaptopWindowsOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/LaptopWindowsRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/LaptopWindowsSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/LaptopWindowsTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
