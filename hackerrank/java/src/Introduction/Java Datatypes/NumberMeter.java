public class NumberMeter {
  public static boolean fitsInOneByte(long number) {
    return (number >= Byte.MIN_VALUE) && (number <= Byte.MAX_VALUE);
  }

  public static boolean fitsInOneShort(long number) {
    return (number >= Short.MIN_VALUE) && (number <= Short.MAX_VALUE);
  }

  public static boolean fitsInOneInteger(long number) {
    return (number >= Integer.MIN_VALUE) && (number <= Integer.MAX_VALUE);
  }

  public static boolean fitsInOneLong(long number) {
    return (number >= Long.MIN_VALUE) && (number <= Long.MAX_VALUE);
  }
}
