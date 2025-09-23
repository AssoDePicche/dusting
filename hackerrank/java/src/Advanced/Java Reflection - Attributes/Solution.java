import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collections;

public class Solution {
  public static void main(String[] args) {
    Class<?> student = new Student().getClass();

    Method[] methods = student.getDeclaredMethods();

    ArrayList<String> methodsNames = new ArrayList<>();

    for (Method method : methods) {
      methodsNames.add(method.getName());
    }

    Collections.sort(methodsNames);

    for (String name : methodsNames) {
      System.out.println(name);
    }
  }
}
