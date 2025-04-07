package prb_solving;

import java.util.HashSet;

public class FindVowel {

    public static void VowelCounter(String str) {
        String vowels = "aeiouAEIOU";
        int count = 0;
        char[] charString = str.toCharArray();
        HashSet<Character> hashSet = new HashSet<Character>();
        for(char c : charString) {
            if (vowels.indexOf(c) != -1) {
                count++;
                hashSet.add(c);
            }
        }
        System.out.println("Total number of vowels: " + count);
        System.out.println("Total number of unique vowels: " + hashSet.size());
        System.out.println("Unique Vowels: " + hashSet);
    }

    public static void main(String[] args) {
        VowelCounter("i am a sqa engineer");
    }

}
