// Colourblindness

import java.util.Scanner;

public class L {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();

        int n , counter = 0;
        String row1 , row2;
        while(t-- > 0) {
            n = in.nextInt();
            counter = 0;

            row1 = in.next();
            row2 = in.next();

            char[] arr1 = row1.toCharArray();
            char[] arr2 = row2.toCharArray();

            for(int i = 0 ; i < n ; i++) {
                if(arr1[i] == arr2[i]) {
                    counter++;
                }else if( (arr1[i] == 'G' && arr2[i] == 'B') ||
                        (arr1[i] == 'B' && arr2[i] == 'G')) {
                    counter++;
                }
            }
            if(counter == n) {
                System.out.println("YES");
            }else {
                System.out.println("NO");
            }
        }
        in.close();
    }
}