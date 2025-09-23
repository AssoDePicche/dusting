public class Motorcycle extends Bicycle {
  Motorcycle() {
    System.out.println("Hello I am a motorcycle, I am " + describe());

    System.out.println("My ancestor is a cycle who is " + super.describe());
  }

  @Override
  public String describe() {
    return "a cycle with an engine.";
  }
}
