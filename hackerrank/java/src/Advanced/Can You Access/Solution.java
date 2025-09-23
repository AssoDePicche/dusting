import java.util.Scanner;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int num = Integer.parseInt(scanner.nextLine());

    scanner.close();

    Solution.Inner.Private object = new Solution.Inner().new Private();

    Method callable = getMethod(object, "powerof2", int.class);

    System.out.println(num + " is " + invokeMethod(callable, object, num));

    System.out.println("An instance of class: " + object.getClass().getCanonicalName() + " has been created");
  }

  private static Method getMethod(Object object, String name, Class<?>... parameters) {
    Method method = null;

    try {
      method = object.getClass().getDeclaredMethod(name, parameters);

      method.setAccessible(true);

    } catch (NoSuchMethodException | SecurityException e) {
      e.printStackTrace();
    }

    return method;
  }

  private static Object invokeMethod(Method method, Object object, Object... args) {
    Object invoke = null;

    try {
      invoke = method.invoke(object, args);
    } catch (IllegalAccessException | InvocationTargetException e) {
      e.printStackTrace();
    }

    return invoke;
  }

  static class Inner {
    private class Private {
      private String powerof2(int num) {
        return ((num & num - 1) == 0) ? "power of 2" : "not a power of 2";
      }
    }
  }
}
