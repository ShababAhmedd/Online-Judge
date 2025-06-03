import java.util.Arrays;

public class SortString {
    public static void main(String[] args) {
        String str = "hello";
        char[] charArray = str.toCharArray();
        Arrays.sort(charArray);
        System.out.println(charArray);

        String output = new String(charArray);
        System.out.println(output);

        StringBuilder sb = new StringBuilder();
        sb.append(charArray);
        System.out.println(sb);
    }
}
