import java.util.Comparator;

public class Checker implements Comparator<Player> {
  @Override
  public int compare(Player player1, Player player2) {
    if (player1.getScore() < player2.getScore()) {
      return 1;
    }

    if (player1.getScore() > player2.getScore()) {
      return -1;
    }

    return player1.getName().compareTo(player2.getName());
  }
}
