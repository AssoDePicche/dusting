public class MyCalculator implements AdvancedArithmetic {
  public int divisorSum(int x) {
    int sum = 0, count = 1;

    while (count <= x) {
      if (x % count == 0) {
        sum += count;
      }

      count++;
    }

    return sum;
  }
}
