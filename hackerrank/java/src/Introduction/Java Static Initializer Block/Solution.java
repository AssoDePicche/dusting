import java.util.Scanner;

public class Solution {
  public static int breadth, height;

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    breadth = Integer.valueOf(scanner.nextLine());

    height = Integer.valueOf(scanner.nextLine());

    scanner.close();

    System.out.println(areTheDimensionsValid() ? getArea() : getException());
  }

  public static boolean areTheDimensionsValid() {
    return (breadth > 0) && (height > 0);
  }

  public static int getArea() {
    return breadth * height;
  }

  public static String getException() {
    return "java.lang.Exception: Breadth and height must be positive";
  }
}
