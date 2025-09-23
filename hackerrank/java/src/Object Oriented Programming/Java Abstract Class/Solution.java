import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    String title = scanner.nextLine();

    scanner.close();

    MyBook newNovel = new MyBook();

    newNovel.setTitle(title);

    System.out.println("The title is: " + newNovel.getTitle());
  }
}
