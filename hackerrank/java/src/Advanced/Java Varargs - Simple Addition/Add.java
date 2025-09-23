public class Add {
  public void add(int... args) {
    int sum = 0;

    StringBuilder builder = new StringBuilder("");

    for (int arg : args) {
      sum += arg;

      builder.append(arg);

      builder.append("+");
    }

    String output = builder.substring(0, builder.length() - 1);

    System.out.println(output + "=" + sum);
  }
}
