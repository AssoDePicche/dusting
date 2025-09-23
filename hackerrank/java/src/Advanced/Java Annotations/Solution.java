import java.lang.reflect.Method;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    int testCases, spend, budgetLimit;

    String role, userRole;

    Scanner scanner = new Scanner(System.in);

    testCases = Integer.parseInt(scanner.nextLine());

    while (testCases-- != 0) {
      role = scanner.next();

      spend = scanner.nextInt();

      try {
        Method[] methods = FamilyMember.class.getMethods();

        for (Method method : methods) {
          if (method.isAnnotationPresent(FamilyBudget.class)) {
            FamilyBudget family = method.getAnnotation(FamilyBudget.class);

            userRole = family.userRole();

            budgetLimit = family.budgetLimit();

            if (userRole.equals(role)) {
              if (spend > budgetLimit) {
                System.out.println("Budget Limit Over");

                continue;
              }

              method.invoke(FamilyMember.class.getDeclaredConstructor().newInstance(), budgetLimit, spend);
            }
          }
        }
      } catch (Exception exception) {
        exception.printStackTrace();
      }
    }

    scanner.close();
  }
}
