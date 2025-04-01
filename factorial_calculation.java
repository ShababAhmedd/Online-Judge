// =============
// Iterative
// =============
public class learning {

    public static int factorial(int n) {
        int fac = 1;
        for (int i = 1; i <= n; i++) {
            fac = fac * i;
        }
        return fac;
    }

    public static void main(String[] args) {
        System.out.println(factorial(4));
    }

}


// =============
// Recursive
// =============
public class learning {

    public static int factorial(int n) {
        if (n == 0) {
            return 1;
        }
        return n * factorial(n-1);
    }

    public static void main(String[] args) {
        System.out.println(factorial(4));
    }

}
