public class MyCalculator {
  public static long power(int base, int exponent) throws Exception {
    if (base < 0 || exponent < 0) {
      throw new Exception("n or p should not be negative.");
    } else if (base == 0 && exponent == 0) {
      throw new Exception("n and p should not be zero.");
    }

    return (long) Math.pow(base, exponent);
  }
}
