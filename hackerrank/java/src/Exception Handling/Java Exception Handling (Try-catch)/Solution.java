import java.util.InputMismatchException;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int x, y;

    try {
      x = scanner.nextInt();

      y = scanner.nextInt();

      System.out.println(x / y);
    } catch (InputMismatchException exception) {
      System.out.println("java.util.InputMismatchException");
    } catch (Exception exception) {
      System.out.println(exception);
    } finally {
      scanner.close();
    }
  }
}
