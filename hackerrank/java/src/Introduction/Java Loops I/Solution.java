import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    Integer integer = scanner.nextInt();

    for (int i = 1; i <= 10; i++) {
      System.out.println(integer + " x " + i + " = " + integer * i);
    }

    scanner.close();
  }
}
