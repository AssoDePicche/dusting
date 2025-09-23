import java.util.ArrayList;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    ArrayList<Integer> entries = new ArrayList<>();

    while (scanner.hasNext()) {
      entries.add(Integer.valueOf(scanner.nextLine()));
    }

    scanner.close();

    entries.stream().forEach(System.out::println);
  }
}
