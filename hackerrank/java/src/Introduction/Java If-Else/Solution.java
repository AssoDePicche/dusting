import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int integer;

    integer = scanner.nextInt();

    scanner.close();

    if (isWeird(integer)) {
      System.out.println("Weird");
    } else {
      System.out.println("Not Weird");
    }

  }

  public static boolean isWeird(int integer) {
    if (integer % 2 != 0) {
      return true;
    }

    if (integer > 5 && integer <= 20) {
      return true;
    }

    return false;
  }
}
