// 2665. Counter II

type Counter = {
  increment: () => number;
  decrement: () => number;
  reset: () => number;
};

const createCounter = (init: number): Counter => {
  let counter: number = init;

  return {
    increment() {
      return ++counter;
    },
    decrement() {
      return --counter;
    },
    reset() {
      return (counter = init);
    },
  };
}
