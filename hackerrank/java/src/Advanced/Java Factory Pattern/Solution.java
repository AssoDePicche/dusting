import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    String order = scanner.nextLine();

    scanner.close();

    Food food = FoodFactory.getFood(order);

    System.out.println("The factory returned " + food.getClass());

    System.out.println(food.getType());
  }
}
