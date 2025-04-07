import java.util.Arrays;

public class Anagram {
    public static void main(String[] args) {
        String str1 = "race";
        String str2 = "care";

        char[] char1 = str1.toCharArray();
        char[] char2 = str2.toCharArray();

        Arrays.sort(char1);
        Arrays.sort(char2);

        if (Arrays.equals(char1, char2)) {
            System.out.println("Anagram");
        }
        else {
            System.out.println("NOT Anagram");
        }
        
    }
}
