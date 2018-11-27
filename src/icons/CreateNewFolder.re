open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/CreateNewFolder"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/CreateNewFolderOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/CreateNewFolderRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/CreateNewFolderSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/CreateNewFolderTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
