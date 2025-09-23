import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    Singleton singleton = Singleton.getSingleInstance();

    String greeting = scanner.nextLine();

    scanner.close();

    System.out.printf("Hello I am a singleton! Let me say %s to you\n", greeting);
  }
}
