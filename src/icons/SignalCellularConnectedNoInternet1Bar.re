open IconProps;

module Filled = {
  [@bs.module "@material-ui/icons/SignalCellularConnectedNoInternet1Bar"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Outlined = {
  [@bs.module
    "@material-ui/icons/SignalCellularConnectedNoInternet1BarOutlined"
  ]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Rounded = {
  [@bs.module
    "@material-ui/icons/SignalCellularConnectedNoInternet1BarRounded"
  ]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Sharp = {
  [@bs.module "@material-ui/icons/SignalCellularConnectedNoInternet1BarSharp"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module TwoTone = {
  [@bs.module
    "@material-ui/icons/SignalCellularConnectedNoInternet1BarTwoTone"
  ]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};
