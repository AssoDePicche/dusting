import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    ArrayList<Student> students = new ArrayList<>();

    Checker checker = new Checker();

    int entries, id;

    String name;

    double cgpa;

    Student student;

    Scanner scanner = new Scanner(System.in);

    entries = scanner.nextInt();

    while (entries-- != 0) {
      id = scanner.nextInt();

      name = scanner.next();

      cgpa = scanner.nextDouble();

      student = new Student(id, name, cgpa);

      students.add(student);
    }

    scanner.close();

    Collections.sort(students, checker);

    for (Student s : students) {
      System.out.println(s.getName());
    }
  }
}
