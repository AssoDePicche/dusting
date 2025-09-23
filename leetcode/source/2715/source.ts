// 2715. Timeout Cancellation

const cancellable = (fn: Function, args: any[], t: number): Function => {
  let willFnCall: boolean = true;

  setTimeout(() => willFnCall && fn(...args), t);

  return () => (willFnCall = false);
};
