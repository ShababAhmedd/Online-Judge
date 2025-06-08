public class SecondMax {

    public static void main(String[] args) {
        int[] num = {54, 11, 2, 8, 4, 0, 6, 77, 32, 905};
        int max = num[0];
        int sLargest = num[0];

        for (int i = 0; i < num.length; i++) {
            if (num[i] > max) {
                sLargest = max;
                max = num[i];
            } else {
                if (num[i] > sLargest) {
                    sLargest = num[i];
                }
            }
        }
        System.out.println(sLargest);
    }

}
