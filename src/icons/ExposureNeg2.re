open IconProps;

module Filled = {
  [@bs.module "@material-ui/icons/ExposureNeg2"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Outlined = {
  [@bs.module "@material-ui/icons/ExposureNeg2Outlined"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Rounded = {
  [@bs.module "@material-ui/icons/ExposureNeg2Rounded"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Sharp = {
  [@bs.module "@material-ui/icons/ExposureNeg2Sharp"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module TwoTone = {
  [@bs.module "@material-ui/icons/ExposureNeg2TwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};
