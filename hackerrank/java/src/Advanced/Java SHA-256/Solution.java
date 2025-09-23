import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    try {
      MessageDigest sha256 = MessageDigest.getInstance("SHA-256");

      Scanner scanner = new Scanner(System.in);

      sha256.update(scanner.nextLine().getBytes());

      scanner.close();

      for (byte character : sha256.digest()) {
        System.out.print(String.format("%02x", character));
      }

      System.out.println();
    } catch (NoSuchAlgorithmException exception) {
      exception.printStackTrace();
    }
  }
}
