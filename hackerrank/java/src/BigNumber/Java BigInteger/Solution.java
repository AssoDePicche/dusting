import java.math.BigInteger;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    BigInteger a, b;

    Scanner scanner = new Scanner(System.in);

    a = scanner.nextBigInteger();

    b = scanner.nextBigInteger();

    scanner.close();

    System.out.println(a.add(b));

    System.out.println(a.multiply(b));
  }
}
