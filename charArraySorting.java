import java.util.Arrays;
public class StringManipulations {
    public static void main(String[] args) {
        String str = "Shabab";
        char[] arr = str.toCharArray();
        Arrays.sort(arr);
        String str2 = new String(arr);
        System.out.println(str2);
    }
}
