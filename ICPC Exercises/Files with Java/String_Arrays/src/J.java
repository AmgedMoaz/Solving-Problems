// Advantage

import java.util.Arrays;
import java.util.Scanner;

public class J {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            int n = in.nextInt();
            int[] arr1 = new int[n];
            int[] arr2 = new int[n];

            for(int i = 0 ; i < n ; i++) {
                arr1[i] = in.nextInt();
                arr2[i] = arr1[i];
            }

            Arrays.sort(arr2);
            int max1 = arr2[n - 1];
            int max2 = arr2[n - 2];

            for(int i = 0 ; i < n ; i++){
                if(arr1[i] != max1) {
                    System.out.print((arr1[i] - max1) + " ");
                } else {
                    // لو أكبر قيمة متكررة، الفارق مع أقوى شخص آخر سيكون 0
                    if(max1 == max2) {
                        System.out.print(0 + " ");
                    } else {
                        System.out.print((arr1[i] - max2) + " ");
                    }
                }
            }
            System.out.println();
        }
        in.close();

    }
}