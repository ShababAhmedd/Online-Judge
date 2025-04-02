public class learning {

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int search = 2;
        boolean found = false;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == search) {
                found = true;
                break;
            }
        }
        if (found)
            System.out.println("Found");
        else
            System.out.println("Not Found");
    }
}
