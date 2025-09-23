// 2629. Function Composition

type F = (x: number) => number;

const compose = (buffer: F[]): F => {
  if (buffer.length === 0) {
    return (x: number) => x;
  }

  return buffer.reduceRight((f, g) => (x: number) => g(f(x)));
};
