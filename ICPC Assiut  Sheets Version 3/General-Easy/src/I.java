// Colorful Stones (Simplified Edition)

import java.util.Scanner;

public class I {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s = in.next();
        String t = in.next();

        int pos = 0;
        char[] arr1 = s.toCharArray();
        char[] arr2 = t.toCharArray();
        for(int i = 0 ; i < t.length()  ; i++) {
            if(arr1[pos] == arr2[i]) {
                pos++;
            }
        }
        System.out.println( (pos+1) );
        in.close();
    }
}