open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/AccountBalanceWallet"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/AccountBalanceWalletOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/AccountBalanceWalletRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/AccountBalanceWalletSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/AccountBalanceWalletTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
