import java.util.HashSet;

public class CheckDuplicateNumber {
    public static void main(String[] args) {
        int[] num = {1, 2, 3, 4, 5, 1, 1, 2};
        HashSet<Integer> hashSet = new HashSet<>();
        for (int i = 0; i < num.length; i++) {
            if (hashSet.contains(num[i])) {
                continue;
            }
            int count = 1;
            for (int j = i + 1; j < num.length; j++) {
                if (num[i] == num[j]) {
                    count++;
                }
            }
            if (count > 1) {
                System.out.println(num[i] + " - " + count);
            }
            hashSet.add(num[i]);
        }
    }
}
