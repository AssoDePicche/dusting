import java.util.ArrayList;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    ArrayList<Integer> list = new ArrayList<>();

    Scanner scanner = new Scanner(System.in);

    int elements, queries, x, y;

    String command;

    elements = scanner.nextInt();

    while (elements-- != 0) {
      x = scanner.nextInt();

      list.add(x);
    }

    queries = scanner.nextInt();

    while (queries-- != 0) {
      command = scanner.nextLine();

      switch (command.toLowerCase()) {
        case "insert":
          x = scanner.nextInt();

          y = scanner.nextInt();

          list.add(x, y);
          break;

        case "delete":
          x = scanner.nextInt();

          list.remove(x);
          break;
      }
    }

    scanner.close();

    for (int item : list) {
      System.out.printf("%d ", item);
    }
  }
}
