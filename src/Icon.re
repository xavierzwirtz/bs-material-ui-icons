open Belt.Option;

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
  | [@bs.as "small"] `Small
  | [@bs.as "large"] `Large
];

[@bs.obj]
external makeProps:
  (
    ~className: string=?,
    ~color: string=?,
    ~fontSize: string=?,
    ~nativeColor: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~titleAccess: string=?,
    ~viewBox: string=?,
    unit
  ) =>
  _ =
  "";

module type IconClass = {let reactClass: ReasonReact.reactClass;};

module Make = (Icon: IconClass) => {
  include Icon;
  let make =
      (
        ~className: option(string)=?,
        ~color: option(color)=?,
        ~fontSize: option(fontSize)=?,
        ~nativeColor: option(string)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~titleAccess: option(string)=?,
        ~viewBox: option(string)=?,
        children: array(ReasonReact.reactElement),
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~color=?color->map(colorToJs),
          ~fontSize=?fontSize->map(fontSizeToJs),
          ~nativeColor?,
          ~style?,
          ~titleAccess?,
          ~viewBox?,
          (),
        ),
      children,
    );
  /**
 * This is a wrapper created to let this component be used from the new React api.
 * Please convert this component to a [@react.component] function and then remove this wrapping code.
 */
  let make =
    ReasonReactCompat.wrapReasonReactForReact(
      ~component=ReasonReact.statelessComponent("TemporaryRefactorComponent"),
      (
        reactProps: {
          .
          "viewBox": option('viewBox),
          "titleAccess": option('titleAccess),
          "style": option('style),
          "nativeColor": option('nativeColor),
          "fontSize": option('fontSize),
          "color": option('color),
          "className": option('className),
          "children": 'children,
        },
      ) =>
      make(
        ~viewBox=?reactProps##viewBox,
        ~titleAccess=?reactProps##titleAccess,
        ~style=?reactProps##style,
        ~nativeColor=?reactProps##nativeColor,
        ~fontSize=?reactProps##fontSize,
        ~color=?reactProps##color,
        ~className=?reactProps##className,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~className: 'className=?,
      ~color: 'color=?,
      ~fontSize: 'fontSize=?,
      ~nativeColor: 'nativeColor=?,
      ~style: 'style=?,
      ~titleAccess: 'titleAccess=?,
      ~viewBox: 'viewBox=?,
      unit
    ) =>
    {
      .
      "viewBox": option('viewBox),
      "titleAccess": option('titleAccess),
      "style": option('style),
      "nativeColor": option('nativeColor),
      "fontSize": option('fontSize),
      "color": option('color),
      "className": option('className),
      "children": 'children,
    } =
    "";
  /**
 * This is a wrapper created to let this component be used from the new React api.
 * Please convert this component to a [@react.component] function and then remove this wrapping code.
 */
  let make =
    ReasonReactCompat.wrapReasonReactForReact(
      ~component=ReasonReact.statelessComponent("TemporaryRefactorComponent"),
      (
        reactProps: {
          .
          "viewBox": option('viewBox),
          "titleAccess": option('titleAccess),
          "style": option('style),
          "nativeColor": option('nativeColor),
          "fontSize": option('fontSize),
          "color": option('color),
          "className": option('className),
          "children": 'children,
        },
      ) =>
      make(
        ~viewBox=?reactProps##viewBox,
        ~titleAccess=?reactProps##titleAccess,
        ~style=?reactProps##style,
        ~nativeColor=?reactProps##nativeColor,
        ~fontSize=?reactProps##fontSize,
        ~color=?reactProps##color,
        ~className=?reactProps##className,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~className: 'className=?,
      ~color: 'color=?,
      ~fontSize: 'fontSize=?,
      ~nativeColor: 'nativeColor=?,
      ~style: 'style=?,
      ~titleAccess: 'titleAccess=?,
      ~viewBox: 'viewBox=?,
      unit
    ) =>
    {
      .
      "viewBox": option('viewBox),
      "titleAccess": option('titleAccess),
      "style": option('style),
      "nativeColor": option('nativeColor),
      "fontSize": option('fontSize),
      "color": option('color),
      "className": option('className),
      "children": 'children,
    } =
    "";
};
