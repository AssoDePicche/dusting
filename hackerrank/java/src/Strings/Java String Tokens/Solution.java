import java.util.ArrayList;
import java.util.Scanner;

public class Solution {
  private static final ArrayList<String> formmatedList = new ArrayList<>();

  public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);

    String string = scanner.nextLine();

    scanner.close();

    String[] split = string.split("[!,?. '_@']");

    for (String token : split) {
      if (!token.isEmpty()) {
        formmatedList.add(token);
      }
    }

    System.out.println(formmatedList.size());

    formmatedList.forEach(System.out::println);
  }
}
