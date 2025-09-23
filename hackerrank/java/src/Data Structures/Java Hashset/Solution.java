import java.util.HashSet;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    HashSet<String> set = new HashSet<>();

    int pairs, count = 0;

    String a, b;

    Scanner scanner = new Scanner(System.in);

    pairs = scanner.nextInt();

    while (pairs-- != 0) {
      a = scanner.next();

      b = scanner.next();

      if (!set.contains(a + " " + b)) {
        count++;
      }

      set.add(a + " " + b);

      System.out.println(count);
    }

    scanner.close();
  }
}
