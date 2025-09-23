// 2620. Counter

const createCounter = (n: number): () => number => {
  return () => n++;
};
