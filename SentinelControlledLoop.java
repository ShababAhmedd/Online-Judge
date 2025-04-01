import java.util.Scanner;

public class learning {

    public static void main(String[] args) {

        int sum = 0;
        System.out.println("Enter a number");
        Scanner sc = new Scanner(System.in);

        while (true) {
            int num = sc.nextInt();
            if (num == -1) {
                System.out.println("-1 Entered");
                System.out.println("System Terminated");
                break;
            }
            else {
                sum += num;
                System.out.println("Sum till now: " + sum);
            }
        }

    }

}
