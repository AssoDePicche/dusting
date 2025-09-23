import java.util.regex.Pattern;
import java.util.regex.PatternSyntaxException;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    Integer n = Integer.parseInt(scanner.nextLine());

    while (n-- != 0) {
      String pattern = scanner.nextLine();

      try {
        Pattern.compile(pattern);

        System.out.println("Valid");
      } catch (PatternSyntaxException e) {
        System.out.println("Invalid");
      }
    }

    scanner.close();
  }
}
