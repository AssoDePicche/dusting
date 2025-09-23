import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int month, day, year;

    month = scanner.nextInt();

    day = scanner.nextInt();

    year = scanner.nextInt();

    scanner.close();

    String output = Solution.findDay(month, day, year);

    System.out.println(output);
  }

  public static String findDay(int month, int day, int year) {
    Calendar calendar = Calendar.getInstance();

    SimpleDateFormat formatter = new SimpleDateFormat("EEEE");

    calendar.set(year, month - 1, day);

    return formatter.format(calendar.getTime()).toUpperCase();
  }
}
