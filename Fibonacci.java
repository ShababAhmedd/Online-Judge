public class Fibonacci {

    public static void fibonacci (int n) {
        if (n == 0) {
            System.out.println(0);
            return;
        } else if (n == 1) {
            System.out.println(1);
            return;
        }
        int a = 0, b = 1;
        int fib = 0;
        for (int i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
        System.out.println(fib);
    }

    public static void main(String[] args) {
        fibonacci(10);
    }

}
