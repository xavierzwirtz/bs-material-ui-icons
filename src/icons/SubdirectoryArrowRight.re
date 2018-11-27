open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SubdirectoryArrowRight"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SubdirectoryArrowRightOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SubdirectoryArrowRightRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SubdirectoryArrowRightSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SubdirectoryArrowRightTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
