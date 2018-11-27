open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/PermDeviceInformation"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/PermDeviceInformationOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/PermDeviceInformationRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/PermDeviceInformationSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/PermDeviceInformationTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
