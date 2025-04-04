public class StringManipulations {
    public static void main(String[] args) {
        String str = "mashrur safir shabab";
        String[] name = str.split(" ");
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < name.length; i++) {
            String firstLetter = String.valueOf(name[i].charAt(0)).toUpperCase();
            String restLetters = name[i].substring(1);
            String word = firstLetter + restLetters;
            sb.append(word).append(" ");
        }
        System.out.println(sb.toString().trim());
    }
}
