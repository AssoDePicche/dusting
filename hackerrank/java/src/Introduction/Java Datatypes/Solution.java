import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int testCases = scanner.nextInt();

    while (testCases-- != 0) {
      try {
        long number = scanner.nextLong();

        System.out.println(number + " can be fitted in:");

        if (NumberMeter.fitsInOneByte(number)) {
          System.out.println("* byte");
        }

        if (NumberMeter.fitsInOneShort(number)) {
          System.out.println("* short");
        }

        if (NumberMeter.fitsInOneInteger(number)) {
          System.out.println("* int");
        }

        if (NumberMeter.fitsInOneLong(number)) {
          System.out.println("* long");
        }
      } catch (Exception exception) {
        System.out.println(scanner.nextLine() + " can't be fitted anywhere.");
      }
    }

    scanner.close();
  }
}
