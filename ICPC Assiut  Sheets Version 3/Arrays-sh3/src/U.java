// Is B a subsequence of A ?

import java.util.Scanner;

public class U {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int m = in.nextInt();

        int[] arr1 = new int[n];
        int[] arr2 = new int[m];
        for(int i = 0 ; i < n ; i++) arr1[i] = in.nextInt();
        for(int i = 0 ; i < m ; i++) arr2[i] = in.nextInt();

        int index = 0;
        for(int i = 0 ; i < m ; i++) {
            boolean found = false;
            for(int j = index ; j < n ; j++) {
                if(arr2[i] == arr1[j]) {
                    index = j + 1; // الانتقال للعنصر التالي لتجنب تكرار نفس العنصر
                    found = true;
                    break;
                }
            }
            // إذا لم نجد العنصر الحالي من B داخل A
            if(!found) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
        in.close();

    }
}