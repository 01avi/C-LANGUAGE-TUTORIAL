public class ReversePyramid {
    public static void main(String[] args) {
        int row = 5;
        for (int i = row; i >= 1; i--) {
            for (int j = row; j > i; j--) {
                System.out.print(" ");
            }
            for (int k = 1; k <= (2 * i - 1); k++) {
                System.out.print("*");
            }
            System.err.println();
        }
    }
}
