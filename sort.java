import java.util.Arrays;

public class Swapping {
    public static void main(String[] args) {
        int[] num = {1, 0, 2, 9, 3, 8, 4, 7, 5, 6};
        for (int i = 0; i < num.length; i++) {
            for (int j = i + 1; j < num.length; j++) {
                if (num[i] > num[j]) {
                    int temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
        System.out.println(Arrays.toString(num));
    }
}
