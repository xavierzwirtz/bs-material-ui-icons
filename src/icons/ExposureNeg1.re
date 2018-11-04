open IconProps;

module Filled = {
  [@bs.module "@material-ui/icons/ExposureNeg1"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Outlined = {
  [@bs.module "@material-ui/icons/ExposureNeg1Outlined"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Rounded = {
  [@bs.module "@material-ui/icons/ExposureNeg1Rounded"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Sharp = {
  [@bs.module "@material-ui/icons/ExposureNeg1Sharp"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module TwoTone = {
  [@bs.module "@material-ui/icons/ExposureNeg1TwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};
