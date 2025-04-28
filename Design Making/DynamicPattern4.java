//     *
//    ***
//   *****
//   *   *
//   *   *
//   *   *
//   *   *
//   *   *
//  e     e
// ee     ee
//eee     eee
// ee     ee
//  e     e
//    *****
//    *****
//    *****
//    *****
//    *****


package Placement;

import java.util.Scanner;
public class DynamicPattern4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number:- ");
        int n = sc.nextInt();
        int i, j;

        for (i = 0; i < n / 2 + 1; i++) {
            for (j = 0; j < n-i ; j++) {
                System.out.print(" ");
            }
            for (j = 0; j < 2 * i + 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < n / 2 + 1; j++) {
                System.out.print(" ");
            }
            for (j = 0; j < n; j++) {
                if (j == 0 || j == n - 1) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }

            }
            System.out.println();
        }
        
        for (i = 0; i < n; i++) {
            for (j = 0; j < n / 2 + 1; j++) {
                if (j >= n / 2 - i && j >= i - n / 2) {
                    System.out.print("e");
                } else {
                    System.err.print(" ");
                }
            }
            for (j = 0; j < n; j++) {
                System.out.print(" ");
            }
            for (j = 0; j < n / 2 + 1; j++) {
                if (j >= n / 2 - i && j >= i - n / 2) {
                    System.out.print("e");
                }
            }

            System.out.println();
        }
        
        for (i = 0; i < n; i++) {
            for (j = 0; j < n - 1; j++) {
                System.out.print(" ");
            }
            for (j = 0; j < n; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
