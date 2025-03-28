public class learning {
    public static void main(String[] args) {

        int num = 7;
        boolean flag = true;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                flag = false;
                break;
            }
        }

        if (flag == true) System.out.println("Prime");
        else System.out.println("Not Prime");

    }
}
