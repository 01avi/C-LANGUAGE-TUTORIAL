public class Rev {
    public static void main(String[] args) {
        String str = "My name is aviral upadhyay";
        char arr[] = str.toCharArray();
        int n = arr.length;
        String result = "";
        for (int i = n - 1; i >= 0; i--) {
            result = result + arr[i];

        }
    System.out.println(result);
    }
}


