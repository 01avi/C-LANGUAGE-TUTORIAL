public class HollowPyramidPattern {
    public static void main(String[] args) {
        int rows = 8;
        for (int i = 1; i <= rows; i++) {
            for (int j = i; j < rows; j++) {
                System.err.print(" ");
            }
            for (int k = 1; k <= (2 * i - 1); k++) {
                System.err.print(k == 1 || k == (2 * i - 1) || i == rows ? "*" : " ");
            }
            System.out.println();
        }
    }
}
  