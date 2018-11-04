open IconProps;

module Filled = {
  [@bs.module "@material-ui/icons/SignalCellularConnectedNoInternet2Bar"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Outlined = {
  [@bs.module
    "@material-ui/icons/SignalCellularConnectedNoInternet2BarOutlined"
  ]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Rounded = {
  [@bs.module
    "@material-ui/icons/SignalCellularConnectedNoInternet2BarRounded"
  ]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module Sharp = {
  [@bs.module "@material-ui/icons/SignalCellularConnectedNoInternet2BarSharp"]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};

module TwoTone = {
  [@bs.module
    "@material-ui/icons/SignalCellularConnectedNoInternet2BarTwoTone"
  ]
  external reactClass: ReasonReact.reactClass = "default";
  let make = makeIcon(~reactClass);
};
