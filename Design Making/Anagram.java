import java.util.Arrays;

public class Anagram {

    public static void main(String[] args) {
        String str1 = "listen";
        String str2 = "liyten";

         if (str1.length() != str2.length()) {
            System.out.println("Not Anagram");
            return;
        }

        char[] arr1 = str1.toCharArray();
        char[] arr2 = str2.toCharArray();

        Arrays.sort(arr1);
        Arrays.sort(arr2);
        for (int i = 0; i < arr1.length; i++) {

            if (arr1[i] != arr2[i]) {
                System.out.println("Not Anagram");
                return;
            }
        }
        System.out.println("An anagram");
    }
}