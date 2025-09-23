import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Add add = new Add();

    int n1, n2, n3, n4, n5, n6;

    Scanner scanner = new Scanner(System.in);

    n1 = scanner.nextInt();

    n2 = scanner.nextInt();

    n3 = scanner.nextInt();

    n4 = scanner.nextInt();

    n5 = scanner.nextInt();

    n6 = scanner.nextInt();

    scanner.close();

    add.add(n1, n2);

    add.add(n1, n2, n3);

    add.add(n1, n2, n3, n4, n5);

    add.add(n1, n2, n3, n4, n5, n6);
  }
}
