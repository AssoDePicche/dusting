import java.util.BitSet;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int nbits = scanner.nextInt();

    BitSet a = new BitSet(nbits);

    BitSet b = new BitSet(nbits);

    BitSet[] bitSets = { a, b };

    int operations = scanner.nextInt();

    while (operations-- != 0) {
      String operation = scanner.next();

      int set = scanner.nextInt();

      int index = scanner.nextInt();

      switch (operation.toUpperCase()) {
        case "AND":
          bitSets[set - 1].and(bitSets[index - 1]);
          break;

        case "OR":
          bitSets[set - 1].or(bitSets[index - 1]);
          break;

        case "XOR":
          bitSets[set - 1].xor(bitSets[index - 1]);
          break;

        case "FLIP":
          bitSets[set - 1].flip(index);
          break;

        case "SET":
          bitSets[set - 1].set(index);
          break;
      }

      System.out.println(a.cardinality() + " " + b.cardinality());
    }

    scanner.close();
  }
}
