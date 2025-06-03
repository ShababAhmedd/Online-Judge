import java.util.Arrays;
import java.util.Random;

public class ShuffleArray {
    public static void main(String[] args) {
        int[] num = {10, 20, 30, 40, 50, 60, 70, 80, 90};
        Random random = new Random();
        for (int i = 0; i < num.length; i++) {
            int index = random.nextInt(num.length);
            int temp = num[index];
            num[index] = num[i];
            num[i] = temp;
        }
        System.out.println(Arrays.toString(num));
    }
}
