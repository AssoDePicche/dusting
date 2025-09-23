import java.lang.Exception;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    while (scanner.hasNextInt()) {
      try {
        int base, exponent;

        base = scanner.nextInt();

        exponent = scanner.nextInt();

        System.out.println(MyCalculator.power(base, exponent));
      } catch (Exception exception) {
        System.out.println(exception);
      } finally {
        scanner.close();
      }
    }

    scanner.close();
  }
}
