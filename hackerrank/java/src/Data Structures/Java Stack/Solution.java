import java.util.Arrays;
import java.util.List;
import java.util.Stack;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    while (scanner.hasNext()) {
      System.out.println(isBalanced(scanner.next()));
    }

    scanner.close();
  }

  public static boolean openClose(char open, char close) {
    List<String> chars = Arrays.asList("()", "[]", "{}");

    String str = String.valueOf(open) + String.valueOf(close);

    return chars.contains(str);
  }

  public static boolean isBalanced(String string) {
    Stack<Character> stack = new Stack<>();

    List<Character> openChars = Arrays.asList('(', '{', '[');

    for (char character : string.toCharArray()) {
      if (openChars.contains(character)) {
        stack.push(character);

        continue;
      }

      if (stack.isEmpty()) {
        return false;
      }

      char lastOpened = stack.pop();

      if (!openClose(lastOpened, character)) {
        return false;
      }
    }

    return stack.isEmpty();
  }
}
