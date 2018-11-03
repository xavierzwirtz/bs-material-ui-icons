module Filled = {
  [@bs.module "@material-ui/icons/TurnedIn"]
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
  [@bs.module "@material-ui/icons/TurnedInOutlined"]
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
  [@bs.module "@material-ui/icons/TurnedInRounded"]
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
  [@bs.module "@material-ui/icons/TurnedInSharp"]
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
  [@bs.module "@material-ui/icons/TurnedInTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
  [@bs.obj] external makeProps: (~className: string=?, unit) => _ = "";
  let make = (~className: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~className?, ()),
      children,
    );
};
