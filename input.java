// Main.java
import java.util.Scanner;
public class Main {
int a,b;
  a=90;

  String jembru="jemberu";
  String group3="developers";
  public static void main(String[] args) {
   
      if(jembru=="jemberu")
      {
        System.out.println(group3);
      }
      
      // Creating an object of AnotherClass
      AnotherClass anotherObj = new AnotherClass();
      anotherObj.display();
      
    while(a>=70){
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
 
 
}
class AnotherClass {
  void display() {
 
      System.out.println("Hello from grup 3 developer team!");
  }
}
// AnotherClass.java
