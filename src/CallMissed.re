module Filled = {
  [@bs.module "@material-ui/icons/CallMissed"]
  external reactClass: ReasonReact.reactClass = "default";
  [@bs.obj] external makeProps: (~className: string=?, unit) => _ = "";
  let make = (~className: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~className?, ()),
      children,
    );
};

module Outlined = {
  [@bs.module "@material-ui/icons/CallMissedOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
  [@bs.obj] external makeProps: (~className: string=?, unit) => _ = "";
  let make = (~className: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~className?, ()),
      children,
    );
};

module Rounded = {
  [@bs.module "@material-ui/icons/CallMissedRounded"]
  external reactClass: ReasonReact.reactClass = "default";
  [@bs.obj] external makeProps: (~className: string=?, unit) => _ = "";
  let make = (~className: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~className?, ()),
      children,
    );
};

module Sharp = {
  [@bs.module "@material-ui/icons/CallMissedSharp"]
  external reactClass: ReasonReact.reactClass = "default";
  [@bs.obj] external makeProps: (~className: string=?, unit) => _ = "";
  let make = (~className: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~className?, ()),
      children,
    );
};

module TwoTone = {
  [@bs.module "@material-ui/icons/CallMissedTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
  [@bs.obj] external makeProps: (~className: string=?, unit) => _ = "";
  let make = (~className: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~className?, ()),
      children,
    );
};
