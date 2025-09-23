import java.util.Arrays;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    String a = scanner.next();

    String b = scanner.next();

    scanner.close();

    System.out.println(isAnagram(a, b) ? "Anagrams" : "Not Anagrams");
  }

  public static boolean isAnagram(String a, String b) {
    if (a.length() != b.length()) {
      return false;
    }

    char aFreq[] = a.toLowerCase().toCharArray();

    char bFreq[] = b.toLowerCase().toCharArray();

    Arrays.sort(aFreq);

    Arrays.sort(bFreq);

    for (int i = 0; i < aFreq.length; i++) {
      if (aFreq[i] != bFreq[i]) {
        return false;
      }
    }

    return true;
  }
}
