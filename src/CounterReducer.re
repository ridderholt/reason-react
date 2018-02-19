type state = {counter: int};

type action =
  | Increment
  | Decrement;

let counterReducer = (action, state) =>
  switch action {
  | Increment => ReasonReact.Update({...state, counter: state.counter + 1})
  | Decrement => ReasonReact.Update({...state, counter: state.counter - 1})
  };