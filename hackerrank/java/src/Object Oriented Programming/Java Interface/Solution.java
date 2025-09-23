import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    MyCalculator myCalculator = new MyCalculator();

    System.out.print("I implemented: ");

    Solution.ImplementedInterfaceNames(myCalculator);

    Scanner scanner = new Scanner(System.in);

    int x = scanner.nextInt();

    scanner.close();

    System.out.println(myCalculator.divisorSum(x));
  }

  public static void ImplementedInterfaceNames(Object object) {
    Class<?>[] interfaces = object.getClass().getInterfaces();

    for (int i = 0; i < interfaces.length; i++) {
      String interfaceName = interfaces[i].getName();

      System.out.println(interfaceName);
    }
  }
}
