public class Solution {
  public static void main(String[] args) {
    Adder adder = new Adder();

    String superClass = adder.getClass().getSuperclass().getName();

    System.out.println("My superclass is: " + superClass);

    int x, y, z;

    x = adder.add(10, 32);

    y = adder.add(10, 3);

    z = adder.add(10, 10);

    System.out.printf("%d %d %d\n", x, y, z);
  }
}
