
public class Example {
    public  void main() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num = scanner.nextInt();
        char a='b';
        String str="jemberu";
        if (num % 2 == 0) {
            System.out.println("Even number.");
        } else {
            System.out.println("Odd number.");
            
        }
        scanner.close();
    }
}
