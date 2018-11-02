[@bs.module "@material-ui/icons/SignalCellularConnectedNoInternet2BarOutlined"]
external reactClass: ReasonReact.reactClass = "default";
let make = children =>
  ReasonReact.wrapJsForReason(~reactClass, ~props=Js.Obj.empty(), children);
