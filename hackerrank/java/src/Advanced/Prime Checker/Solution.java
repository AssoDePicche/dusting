import java.math.BigInteger;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    int n1, n2, n3, n4, n5;

    Scanner scanner = new Scanner(System.in);

    n1 = scanner.nextInt();

    n2 = scanner.nextInt();

    n3 = scanner.nextInt();

    n4 = scanner.nextInt();

    n5 = scanner.nextInt();

    scanner.close();

    check(n1);

    check(n1, n2);

    check(n1, n2, n3);

    check(n1, n2, n3, n4, n5);
  }

  private static void check(int... args) {
    StringBuilder builder = new StringBuilder("");

    for (int arg : args) {
      if (isPrime(arg)) {
        builder.append(arg);

        builder.append(" ");
      }
    }

    System.out.println(builder);
  }

  private static boolean isPrime(int number) {
    return BigInteger.valueOf(number).isProbablePrime(1);
  }
}
