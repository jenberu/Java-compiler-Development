// Main.java
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello from Main class!");
        Helper helper = new Helper();
        helper.displayMessage();
    }
}

// Helper.java
public class Helper {
    public void displayMessage() {
        System.out.println("Hello from Helper class!");
    }
}
