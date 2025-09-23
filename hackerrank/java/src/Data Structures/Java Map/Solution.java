import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Map<String, Integer> phonebook = new HashMap<>();

    String person, query;

    int entries, phone;

    Scanner scanner = new Scanner(System.in);

    entries= scanner.nextInt();

    scanner.nextLine();

    while (entries-- != 0) {
      person = scanner.nextLine();

      phone = scanner.nextInt();

      phonebook.put(person, phone);

      scanner.nextLine();
    }

    while (scanner.hasNext()) {
      query = scanner.nextLine();

      if (phonebook.containsKey(query)) {
        System.out.println(query + "=" + phonebook.get(query));
      } else {
        System.out.println("Not found");
      }
    }

    scanner.close();
  }
}
