 // *******
 // *     *
 // *     *
 // *     *
 // *******
 // @     @
 // @     @
 // @     @
 // @     @
 // @     @
//***** ****
// ***   ***
//  *     * 

package Placement;

import java.util.*;
public class DynamicPattern3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number:- ");
        int n = sc.nextInt();;
        int i, j, k;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n / 2; j++) {
                System.out.print(" ");
            }
            for (k = 0; k < n + 2; k++) {
                if (i == 0 || k == 0 || i == n - 1 || k == n + 1) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        
        for (i = 0; i < n; i++) {
            for (j = 0; j < n / 2; j++) {
                System.out.print(" ");
            }
            for (k = 0; k < n + 2; k++) {
                if (k == 0 || k == n + 1) {
                    System.out.print("@");
                } else {
                    System.out.print(" ");
                }

            }
            System.out.println();
        }


        for (i = 0; i < n / 2 + 1; i++) {
            for (j = 0; j < n*2; j++) {
                if(j>=i&&j<=n-1-i || j>=n+1+i && j<=n*2-i){
                 System.out.print("*");
                }
                else{
                  System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
