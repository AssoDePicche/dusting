import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int entries = scanner.nextInt();

    List<Integer> list = new ArrayList<>();

    while (entries-- != 0) {
      list.add(scanner.nextInt());
    }

    scanner.close();

    list.forEach(System.out::println);
  }
}
