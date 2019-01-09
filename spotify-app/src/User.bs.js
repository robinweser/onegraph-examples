// Generated by BUCKLESCRIPT VERSION 4.0.17, PLEASE EDIT WITH CARE
'use strict';

var Cn = require("re-classnames/src/Cn.bs.js");
var Block = require("bs-platform/lib/js/block.js");
var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var AppStyle$ReactTemplate = require("./AppStyle.bs.js");
var BsReactstrap__Dropdown = require("@ahrefs/bs-reactstrap/src/BsReactstrap__Dropdown.bs.js");
var BsReactstrap__DropdownItem = require("@ahrefs/bs-reactstrap/src/BsReactstrap__DropdownItem.bs.js");
var BsReactstrap__DropdownMenu = require("@ahrefs/bs-reactstrap/src/BsReactstrap__DropdownMenu.bs.js");
var BsReactstrap__DropdownToggle = require("@ahrefs/bs-reactstrap/src/BsReactstrap__DropdownToggle.bs.js");

var userIcon = require("./img/user.png");

var component = ReasonReact.reducerComponent("User");

function make(_children) {
  return /* record */[
          /* debugName */component[/* debugName */0],
          /* reactClassInternal */component[/* reactClassInternal */1],
          /* handedOffState */component[/* handedOffState */2],
          /* willReceiveProps */component[/* willReceiveProps */3],
          /* didMount */component[/* didMount */4],
          /* didUpdate */component[/* didUpdate */5],
          /* willUnmount */component[/* willUnmount */6],
          /* willUpdate */component[/* willUpdate */7],
          /* shouldUpdate */component[/* shouldUpdate */8],
          /* render */(function (self) {
              return React.createElement("header", {
                          className: AppStyle$ReactTemplate.flexWrapperRightAlign
                        }, React.createElement("div", {
                              style: {
                                width: "100px"
                              }
                            }, ReasonReact.element(undefined, undefined, BsReactstrap__Dropdown.make(undefined, undefined, undefined, undefined, self[/* state */1][/* isDropdownOpen */0], undefined, undefined, undefined, undefined, undefined, (function (param) {
                                        return Curry._1(self[/* send */3], /* Toggle */0);
                                      }), undefined, undefined, undefined, /* array */[
                                      ReasonReact.element(undefined, undefined, BsReactstrap__DropdownToggle.make(true, undefined, Cn.make(/* :: */[
                                                    AppStyle$ReactTemplate.flexWrapperRightAlign,
                                                    /* :: */[
                                                      AppStyle$ReactTemplate.userAccountWrapper,
                                                      /* [] */0
                                                    ]
                                                  ]), undefined, undefined, undefined, undefined, undefined, "div", undefined, /* array */[
                                                React.createElement("img", {
                                                      className: AppStyle$ReactTemplate.userIcon,
                                                      alt: "user icon",
                                                      src: userIcon
                                                    }),
                                                React.createElement("p", {
                                                      style: {
                                                        margin: "0px"
                                                      }
                                                    }, "userABC")
                                              ])),
                                      ReasonReact.element(undefined, undefined, BsReactstrap__DropdownMenu.make(undefined, true, undefined, undefined, undefined, undefined, /* array */[ReasonReact.element(undefined, undefined, BsReactstrap__DropdownItem.make(undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, /* array */["Sign Out"]))]))
                                    ]))));
            }),
          /* initialState */(function (param) {
              return /* record */[/* isDropdownOpen */false];
            }),
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */(function (action, state) {
              return /* Update */Block.__(0, [/* record */[/* isDropdownOpen */!state[/* isDropdownOpen */0]]]);
            }),
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

var Css = 0;

exports.Css = Css;
exports.userIcon = userIcon;
exports.component = component;
exports.make = make;
/* userIcon Not a pure module */
