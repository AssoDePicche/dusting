import java.util.ArrayList;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    ArrayList<Object> list = new ArrayList<>();

    Scanner scanner = new Scanner(System.in);

    int objects = scanner.nextInt();

    for (int i = 0; i < objects; i++) {
      String objectClass = scanner.next();

      if (objectClass.equals("Student")) {
        list.add(new Student());
      }

      if (objectClass.equals("Rockstar")) {
        list.add(new Rockstar());
      }

      if (objectClass.equals("Hacker")) {
        list.add(new Hacker());
      }
    }

    scanner.close();

    System.out.println(Solution.count(list));
  }

  public static String count(ArrayList<Object> list) {
    Integer students = 0, rockstars = 0, hackers = 0;

    for (int i = 0; i < list.size(); i++) {
      if (list.get(i) instanceof Student) {
        students++;
      }

      if (list.get(i) instanceof Rockstar) {
        rockstars++;
      }

      if (list.get(i) instanceof Hacker) {
        hackers++;
      }
    }

    return students.toString() + " " + rockstars.toString() + " " + hackers.toString();
  }
}
