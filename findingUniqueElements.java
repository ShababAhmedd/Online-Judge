import java.util.HashSet;

public class FindUniqueValuesInArray {
    public static void main(String[] args) {
        int[]  num = {1, 0, 2, 9, 3, 8, 4, 7, 5, 6, 6, 5, 7, 4, 8, 3, 9, 2, 0, 1};
        HashSet hashSet = new HashSet();
        for (int c : num) {
            hashSet.add(c);
        }
        System.out.println(hashSet);
    }
}
