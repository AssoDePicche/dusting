import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    String string = scanner.next();

    int start, end;

    start = scanner.nextInt();

    end = scanner.nextInt();

    scanner.close();

    System.out.println(string.substring(start, end));
  }
}
