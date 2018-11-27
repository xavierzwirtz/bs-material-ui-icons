open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SubdirectoryArrowLeft"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SubdirectoryArrowLeftOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SubdirectoryArrowLeftRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SubdirectoryArrowLeftSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SubdirectoryArrowLeftTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
