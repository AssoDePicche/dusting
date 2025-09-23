import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int myInteger = scanner.nextInt();

    double myDouble = scanner.nextDouble();

    scanner.nextLine();

    String myString = scanner.nextLine();

    scanner.close();

    System.out.println("String: " + myString);

    System.out.println("Double: " + myDouble);

    System.out.println("Int: " + myInteger);
  }
}
