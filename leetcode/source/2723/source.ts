// 2723. Add Two Promises

const addTwoPromises = async (
  promise1: Promise<number>,
  promise2: Promise<number>
): Promise<number> => {
  return (await promise1) + (await promise2);
};
