module Filled = {
  [@bs.module "@material-ui/icons/SimCard"]
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
  [@bs.module "@material-ui/icons/SimCardOutlined"]
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
  [@bs.module "@material-ui/icons/SimCardRounded"]
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
  [@bs.module "@material-ui/icons/SimCardSharp"]
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
  [@bs.module "@material-ui/icons/SimCardTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
  [@bs.obj] external makeProps: (~className: string=?, unit) => _ = "";
  let make = (~className: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~className?, ()),
      children,
    );
};
