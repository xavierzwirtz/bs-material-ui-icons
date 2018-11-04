open IconProps;

module Filled = {
  [@bs.module "@material-ui/icons/SignalCellularConnectedNoInternet4Bar"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Outlined = {
  [@bs.module
    "@material-ui/icons/SignalCellularConnectedNoInternet4BarOutlined"
  ]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Rounded = {
  [@bs.module
    "@material-ui/icons/SignalCellularConnectedNoInternet4BarRounded"
  ]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Sharp = {
  [@bs.module "@material-ui/icons/SignalCellularConnectedNoInternet4BarSharp"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module TwoTone = {
  [@bs.module
    "@material-ui/icons/SignalCellularConnectedNoInternet4BarTwoTone"
  ]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};
