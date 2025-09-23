import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    String a, b, capitalized_a, capitalized_b;

    a = scanner.next();

    b = scanner.next();

    scanner.close();

    System.out.println(a.length() + b.length());

    System.out.println(a.compareTo(b) > 0 ? "Yes" : "No");

    capitalized_a = a.substring(0, 1).toUpperCase() + a.substring(1);

    capitalized_b = b.substring(0, 1).toUpperCase() + b.substring(1);

    System.out.printf("%s %s\n", capitalized_a, capitalized_b);
  }
}
