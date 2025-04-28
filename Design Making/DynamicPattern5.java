//            *
//           ***
//          *****
//            *
//            *
//            *
//            *
//        *****
//        *
//   *    *
//  **    *
// ********
//  **
//   *


package Placement;
import java.util.*;
public class DynamicPattern5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 5;
        int i, j;
        for (i = 0; i < n / 2 + 1; i++) {
            for (j = 0; j < n * 2 + 1 - i; j++) {
                System.out.print(" ");
            }
            for (j = 0; j < 2 * i + 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n * 2 + 1; j++) {
                System.out.print(" ");
            }
            for (j = 0; j < 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        
        for (i = 0; i < n / 2; i++) {
            for (j = 0; j < n + 2; j++) {
                System.out.print(" ");
            }
            for (j = 0; j < n; j++) {
                if (i == 0 || j == 0) {
                    System.out.print("*");
                } else {
                    System.out.print("");
                }
            }
            System.out.println();
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < n / 2 + 1; j++) {
                if (j >= n / 2 - i && j >= i - n / 2) {
                    System.out.print("*");
                }
                else {
                    System.out.print(" ");
                }
                
                }
                for (j = 0; j < n / 2 + 2; j++) {
                    if (i == n / 2) {
                        System.out.print("*");
                    } else {
                        System.out.print(" ");
                    }
                }
                for (j = 0; j < 1; j++) {
                    if (i < 3) {
                        System.out.print("*");
                    }
                }
            System.out.println();
            

        }
    }
}
