open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/ThreeDRotation"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/ThreeDRotationOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/ThreeDRotationRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/ThreeDRotationSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/ThreeDRotationTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
