// 2704. To Be Or Not To Be

export type ToBeOrNotToBe = {
  toBe: (val: any) => boolean;

  notToBe: (val: any) => boolean;
};

const expect = (val: any): ToBeOrNotToBe => {
  return {
    toBe: (other) => {
      if (val === other) {
        return true;
      }

      throw new Error("Not Equal");
    },

    notToBe: (other) => {
      if (val !== other) {
        return true;
      }

      throw new Error("Equal");
    },
  };
};
