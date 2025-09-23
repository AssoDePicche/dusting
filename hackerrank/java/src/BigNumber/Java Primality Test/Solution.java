import java.math.BigInteger;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    BigInteger number = scanner.nextBigInteger();

    scanner.close();

    boolean isPrime = number.isProbablePrime(1);

    System.out.println(isPrime ? "prime" : "not prime");
  }
}
