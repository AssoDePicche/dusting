import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    String string, reverse;

    string = scanner.nextLine();

    scanner.close();

    reverse = Solution.reverse(string);

    System.out.println(string.equals(reverse) ? "Yes" : "No");
  }

  public static String reverse(String s) {
    int i = 0, len = s.length();

    char temp[] = new char[len];

    while (len-- > 0) {
      temp[i] = s.charAt(len - 1);

      i++;
    }

    return new String(temp);
  }
}
