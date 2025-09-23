import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    Integer integer = scanner.nextInt();

    scanner.close();

    if (integer >= -100 && integer <= 100) {
      System.out.println("Good job");
    } else {
      System.out.println("Wrong answear");
    }
  }
}
