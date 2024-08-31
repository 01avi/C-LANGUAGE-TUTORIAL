public class Pascal {
    public static void main(String[] args) {
        int row = 9;
        printpascal(row);
    }
    public static void printpascal(int row) {
        for (int i = 0; i < row; i++) {
            for (int k = 0; k < row - i - 1; k++) {
                System.out.print(" ");
            }
            int num = 1;
            for (int j = 0; j <= i; j++) {
                System.out.print(num + " ");
                num = num * (i - j) / (j + 1);
            }
           
            System.out.println();
        }
    }
}
