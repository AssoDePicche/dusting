// 2727. Is Object Empty

const isEmpty = (obj: Record<string, any> | any[]): boolean => {
  return Object.keys(obj).length === 0;
}
