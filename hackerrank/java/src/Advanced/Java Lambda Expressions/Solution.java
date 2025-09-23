import java.util.function.Predicate;
import java.util.Scanner;

public class Solution {
  private static final int EVEN_ODD_OPERATION = 1, PRIME_COMPOSITE_OPERATION = 2, PALINDROME_OPERATION = 3;

  public static void main(String[] args) {
    Predicate<Integer> operation;

    int testCases, condition, number;

    boolean isEven, isPrime, isPalindrome;

    Scanner scanner = new Scanner(System.in);

    testCases = scanner.nextInt();

    while (testCases-- != 0) {
      condition = scanner.nextInt();

      number = scanner.nextInt();

      switch (condition) {
        case EVEN_ODD_OPERATION:
          operation = x -> x % 2 == 0;

          isEven = operation.test(number);

          System.out.println(isEven ? "EVEN" : "ODD");
          break;

        case PRIME_COMPOSITE_OPERATION:
          operation = x -> {
            int count = 0, i;

            for (i = 1; i <= x; i++) {
              if (x % i == 0) {
                count++;
              }
            }

            return count == 2;
          };

          isPrime = operation.test(number);

          System.out.println(isPrime ? "PRIME" : "COMPOSITE");
          break;

        case PALINDROME_OPERATION:
          operation = x -> {
            String value, reverse;

            value = String.valueOf(x);

            reverse = new StringBuilder().append(value).reverse().toString();

            return value.equals(reverse);
          };

          isPalindrome = operation.test(number);

          System.out.println(isPalindrome ? "PALINDROME" : "NOT PALINDROME");
          break;
      }
    }

    scanner.close();
  }
}
