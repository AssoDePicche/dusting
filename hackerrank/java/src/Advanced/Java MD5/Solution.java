import java.math.BigInteger;
import java.security.MessageDigest;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) throws Exception {
    MessageDigest md5 = MessageDigest.getInstance("MD5");

    Scanner scanner = new Scanner(System.in);

    String s = scanner.nextLine();

    scanner.close();

    md5.update(s.getBytes(), 0, s.length());

    System.out.println(new BigInteger(1, md5.digest()).toString(16));
  }
}
