public class ThirdLargestArray {

    public static void main(String[] args) {
        int arr[] = { 2, 23, 32, 22, 112, 12, 21, 23, 0, 34, 54, 32, 67, 65, 43, 23, 1, 5, 2, 0, 0 };
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }

        }
        for (int k = 0; k < n; k++) {
            System.out.print(" " + arr[k] + " ");
        }
            
        int uniqueIndex = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) {
                arr[uniqueIndex] = arr[i];
                uniqueIndex++;
            }
        }
        System.out.println();
        for (int k = 0; k < uniqueIndex; k++) {
            System.out.print(" " + arr[k] + " ");
        }
        System.out.println();
       System.out.print(" " + arr[uniqueIndex-1] + " ");
     }
}