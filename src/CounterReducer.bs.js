// Generated by BUCKLESCRIPT VERSION 2.2.0, PLEASE EDIT WITH CARE
'use strict';

var Block = require("bs-platform/lib/js/block.js");

function counterReducer(action, state) {
  if (action !== 0) {
    return /* Update */Block.__(0, [/* record */[/* counter */state[/* counter */0] - 1 | 0]]);
  } else {
    return /* Update */Block.__(0, [/* record */[/* counter */state[/* counter */0] + 1 | 0]]);
  }
}

exports.counterReducer = counterReducer;
/* No side effect */
