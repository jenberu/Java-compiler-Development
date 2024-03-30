// Main.java

public class Main {

  class AnotherClass {
    void display() {
        System.out.println("Hello from AnotherClass!");
    }
  }
  
  public static void main(String[] args) {
      System.out.println("Hello from Main class!");
      
      // Creating an object of AnotherClass
      AnotherClass anotherObj = new AnotherClass();
      anotherObj.display();
      
      // Using a switch-case statement
      int option = 2;
      switch(option) {
              case 1:
              System.out.println("Option 1 selected");
              break;
          case 2:
              System.out.println("Option 2 selected");
              break;
          default:
              System.out.println("Invalid option");
      }
  }
}

// AnotherClass.java
