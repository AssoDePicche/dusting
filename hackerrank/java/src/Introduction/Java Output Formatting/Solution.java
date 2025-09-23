import java.util.Scanner;

public class Solution {
  private static final String OUTPUT_FORMAT = "%-14s %03d\n", LINE = "=".repeat(32);

  private static final int ENTRIES = 3;
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println(LINE);

    for (int count = 0; count < ENTRIES; count++) {
      System.out.printf(OUTPUT_FORMAT, scanner.next(), scanner.nextInt());
    }

    scanner.close();

    System.out.println(LINE);
  }
}
