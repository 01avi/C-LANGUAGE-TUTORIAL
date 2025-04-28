
//        *
//       ***
//      *****
//     *******
//   *         *
//  **         **
// ***         ***
//  **         **
//   *         *
//    *********
//     *******
//      *****
//       ***
//        *

package Placement;

import java.util.*;

public class DynamicPattern6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 5;
        int i, j;
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n + 2 - i; j++) {
                System.out.print(" ");
            }
            for (j = 0; j < 2 * i + 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < n / 2 + 1; j++) {
                if (j >= n / 2 - i && j >= i - n / 2) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }

            for (j = 0; j < n * 2 - 1; j++) {
                System.out.print(" ");
            }

            for (j = 0; j < n / 2 + 1; j++) {
                if (j >= n / 2 - i && j >= i - n / 2) {
                    System.out.print("*");
                }
            }
            System.out.println();
        }

        for (i = n - 1; i >= 0; i--)

        {
            for (j = 0; j < n + 2 - i; j++) {
                System.out.print(" ");
            }
            for (j = 0; j < 2 * i + 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}