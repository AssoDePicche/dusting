import java.util.ArrayList;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) throws Exception {
    ArrayList<ArrayList<Integer>> matrix = new ArrayList<>();

    int lines, columns, value, queries, line, column;

    Scanner scanner = new Scanner(System.in);

    lines = Integer.parseInt(scanner.nextLine());

    while (lines-- != 0) {
      columns = scanner.nextInt();

      ArrayList<Integer> sublist = new ArrayList<>();

      while (columns-- != 0) {
        value = scanner.nextInt();

        sublist.add(value);
      }

      matrix.add(sublist);
    }

    queries = scanner.nextInt();

    while (queries-- != 0) {
      line = scanner.nextInt();

      column = scanner.nextInt();

      try {
        System.out.println(matrix.get(line - 1).get(column - 1));
      } catch (Exception exception) {
        System.out.println("ERROR!");
      }
    }

    scanner.close();
  }
}
