import java.util.HashSet;

public class FindUniqueValuesInArray {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 2, 4};
        HashSet unique = new HashSet();
        HashSet duplicate = new HashSet();
        for (int num : arr) {
            if (!unique.add(num)) {
                duplicate.add(num);
            }
        }
        System.out.println(duplicate);
    }
}
