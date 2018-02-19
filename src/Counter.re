open CounterReducer;

let component = ReasonReact.reducerComponent("Counter");

let make = _children => {
  ...component,
  initialState: () => {counter: 0},
  reducer: counterReducer,
  render: self => {
    let value = string_of_int(self.state.counter);
    <div>
      <h1> (ReasonReact.stringToElement(value)) </h1>
      <br />
      <button onClick=(_event => self.send(Increment))>
        (ReasonReact.stringToElement("Increment"))
      </button>
      <button onClick=(_event => self.send(Decrement))>
        (ReasonReact.stringToElement("Decrement"))
      </button>
    </div>;
  }
};