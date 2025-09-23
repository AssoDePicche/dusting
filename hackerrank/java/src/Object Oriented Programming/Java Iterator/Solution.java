import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    ArrayList myList = new ArrayList();

    int n, m, i;

    Scanner scanner = new Scanner(System.in);

    n = scanner.nextInt();

    m = scanner.nextInt();

    for (i = 0; i < n; i++) {
      myList.add(scanner.nextInt());
    }

    myList.add("###");

    for (i = 0; i < m; i++) {
      myList.add(scanner.next());
    }

    scanner.close();

    Iterator iterator = Solution.func(myList);

    while (iterator.hasNext()) {
      Object element = iterator.next();

      System.out.println(element.toString());
    }
  }

  public static Iterator func(ArrayList myList) {
    Iterator iterator = myList.iterator();

    while (iterator.hasNext()) {
      Object element = iterator.next();

      if (element instanceof String) {
        break;
      }
    }

    return iterator;
  }
}
