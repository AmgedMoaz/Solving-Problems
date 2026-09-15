// Supercentral Point

import java.util.Scanner;

public class O {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int[] arr1 = new int[n];
        int[] arr2 = new int[n];

        for(int i = 0 ; i < n ; i++) {
            arr1[i] = in.nextInt();
            arr2[i] = in.nextInt();
        }

        int superCentral = 0;

        for(int i = 0 ; i < n ; i++) {
            boolean hasRight = false;
            boolean hasLeft = false;
            boolean hasUpper = false;
            boolean hasLower = false;

            for(int j = 0 ; j < n ; j++){
                if(i == j) continue;

                // جار يمين: x_j > x_i ونفس الـ y
                if (arr1[j] > arr1[i] && arr2[j] == arr2[i]) {
                    hasRight = true;
                }
                // جار يسار: x_j < x_i ونفس الـ y
                if (arr1[j] < arr1[i] && arr2[j] == arr2[i]) {
                    hasLeft = true;
                }
                // جار علوي: y_j > y_i ونفس الـ x
                if (arr2[j] > arr2[i] && arr1[j] == arr1[i]) {
                    hasUpper = true;
                }
                // جار سفلي: y_j < y_i ونفس الـ x
                if (arr2[j] < arr2[i] && arr1[j] == arr1[i]) {
                    hasLower = true;
                }
            }
            if(hasLeft && hasRight && hasLower && hasUpper)
                superCentral++;
        }
        System.out.println(superCentral);
        in.close();

    }
}