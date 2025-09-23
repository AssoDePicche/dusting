import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int numberOfPlayers = scanner.nextInt();

    List<Player> players = new ArrayList<>();

    while (numberOfPlayers-- != 0) {
      String name = scanner.next();

      int score = scanner.nextInt();

      players.add(new Player(name, score));
    }

    scanner.close();

    Collections.sort(players, new Checker());

    players.forEach(System.out::println);
  }
}
