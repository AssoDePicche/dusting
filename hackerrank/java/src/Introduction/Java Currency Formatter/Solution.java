import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    NumberFormat usa = NumberFormat.getCurrencyInstance(Locale.US);

    NumberFormat india = NumberFormat.getCurrencyInstance(new Locale("en", "IN"));

    NumberFormat china = NumberFormat.getCurrencyInstance(Locale.CHINA);

    NumberFormat france = NumberFormat.getCurrencyInstance(Locale.FRANCE);

    Scanner scanner = new Scanner(System.in);

    Double payment = scanner.nextDouble();

    scanner.close();

    System.out.println("US: " + usa.format(payment));

    System.out.println("India: " + india.format(payment));

    System.out.println("China: " + china.format(payment));

    System.out.println("France: " + france.format(payment));
  }
}
