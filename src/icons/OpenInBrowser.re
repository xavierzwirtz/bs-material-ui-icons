open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/OpenInBrowser"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/OpenInBrowserOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/OpenInBrowserRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/OpenInBrowserSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/OpenInBrowserTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
