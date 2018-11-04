[@bs.deriving jsConverter]
type color = [
  | [@bs.as "default"] `Default
  | [@bs.as "error"] `Error
  | [@bs.as "inherit"] `Inherit
  | [@bs.as "primary"] `Primary
  | [@bs.as "secondary"] `Secondary
  | [@bs.as "textPrimary"] `TextPrimary
  | [@bs.as "textSecondary"] `TextSecondary
];

[@bs.deriving jsConverter]
type fontSize = [
  | [@bs.as "default"] `Default
  | [@bs.as "inherit"] `Inherit
  | [@bs.as "small"] `small
  | [@bs.as "large"] `large
];

[@bs.obj]
external makeProps:
  (
    ~className: string=?,
    ~color: color=?,
    ~fontSize: fontSize=?,
    ~nativeColor: string=?,
    ~titleAccess: string=?,
    ~viewBox: string=?,
    unit
  ) =>
  _ =
  "";

let makeIcon =
    (
      ~reactClass: ReasonReact.reactClass,
      ~color: option(color)=?,
      ~className: option(string)=?,
      ~fontSize: option(fontSize)=?,
      ~nativeColor: option(string)=?,
      ~titleAccess: option(string)=?,
      ~viewBox: option(string)=?,
      children: array(ReasonReact.reactElement),
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~className?,
        ~color?,
        ~fontSize?,
        ~nativeColor?,
        ~titleAccess?,
        ~viewBox?,
        (),
      ),
    children,
  );
