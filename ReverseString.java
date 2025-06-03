public class ReverseString {

    public static String stringReverse(String str) {
        char ch[] = str.toCharArray();
        String rev = "";
        for (int i = ch.length-1; i >= 0; i--) {
            rev += ch[i];
        }
        return rev;
    }

    public static void main(String[] args) {
        System.out.println(stringReverse("abc"));
    }

}
