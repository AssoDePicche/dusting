import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    String pattern, username;

    pattern = "^[a-zA-Z][a-zA-Z0-9_]{7,29}$";

    Scanner scanner = new Scanner(System.in);

    Integer n = Integer.parseInt(scanner.nextLine());

    while (n-- != 0) {
      username = scanner.nextLine();

      System.out.println(username.matches(pattern) ? "Valid" : "Invalid");
    }

    scanner.close();
  }
}
