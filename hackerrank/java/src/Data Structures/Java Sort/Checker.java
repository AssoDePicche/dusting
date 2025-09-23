import java.util.Comparator;

public class Checker implements Comparator<Student> {
  @Override
  public int compare(Student student1, Student student2) {
    if (student1.getCgpa() > student2.getCgpa()) {
      return -1;
    }

    if (student1.getCgpa() < student2.getCgpa()) {
      return 1;
    }

    if (student1.getName() != student2.getName()) {
      return student1.getName().compareTo(student2.getName());
    }

    if (student1.getId() > student2.getId()) {
      return -1;
    }

    return 1;
  }
}
