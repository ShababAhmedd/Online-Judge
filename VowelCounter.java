package prb_solving;

public class FindVowel {

    public static void VowelCounter(String str) {
        String vowels = "aeiou";
        int count = 0;
        char[] charString = str.toCharArray();
        for(char c : charString) {
            if (vowels.indexOf(c) != -1) {
                count++;
            }
        }
        System.out.println(count);
    }

    public static void main(String[] args) {
        VowelCounter("i am a sqa engineer");
    }

}
