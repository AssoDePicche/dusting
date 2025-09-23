import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    int a, b, n, queries, temp = 0;

    String serie;

    Scanner scanner = new Scanner(System.in);

    queries = scanner.nextInt();

    while (queries-- != 0) {
      a = scanner.nextInt();

      b = scanner.nextInt();

      n = scanner.nextInt();

      temp += a + Math.pow(2, 0) * b;

      serie = String.valueOf(temp);

      for (int i = 1; i < n; i++) {
        temp += Math.pow(2, i) * b;
        
        serie += " " + String.valueOf(temp);
      }

      System.out.println(serie);

      temp = 0;
    }

    scanner.close();
  }
}
