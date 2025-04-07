package prb_solving;

public class ExtractDigits {

    public static void main(String[] args) {
        digitExtracter("Your secret code is 1234. don't share with anybody.\r\nBvwt3fpjs2S");
    }

    public static void digitExtracter(String str) {
        String code = str.replaceAll("[^0-9]", "").substring(0, 4);
        System.out.println(code);
    }
}
