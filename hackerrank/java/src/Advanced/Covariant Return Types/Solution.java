import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Region region = null;

    Scanner scanner = new Scanner(System.in);

    String state = scanner.nextLine();

    scanner.close();

    switch (state.toLowerCase()) {
      case "westbengal":
        region = new WestBengal();
        break;

      case "andhrapradesh":
        region = new AndhraPradesh();
        break;
    }

    Flower flower = region.yourNationalFlower();

    System.out.println(flower.whatsYourName());
  }
}
