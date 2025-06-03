public class Palindrome {

    public static void palindromeChecker(String Str) {
        StringBuilder sb = new StringBuilder(Str);
        String rev = sb.reverse().toString();
        if(Str.equals(rev)) {
            System.out.println("Palindrome");
        } else{
            System.out.println("Not Palindrome");
        }
    }

    public static void main(String[] args) {
        palindromeChecker("madam");
    }

}
