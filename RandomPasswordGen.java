package prb_solving;
import java.util.Arrays;
import java.util.Random;

public class GenerateRandomPassword {

    public static String GeneratePassword(int len) {
        String allChars = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
        Random random = new Random();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < len; i++) {
            char c = allChars.charAt(random.nextInt(allChars.length()));
            sb.append(c);
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        System.out.println(GeneratePassword(8));
    }
}
