// URL

import java.util.Scanner;

public class T {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        String s = in.next();
        char[] arr = s.toCharArray();
        int n = s.length();
        for(int i = 0 ; i < n ; i++) {
            if(arr[i] == '?') {
                i++;
                while(i < n) {
                    if(arr[i] == '=') {
                        System.out.print(": ");
                    }else if(arr[i] == '&') {
                        System.out.println();
                    }else {
                        System.out.print(arr[i]);
                    }
                    i++;
                }
                break;
            }
        }
        in.close();

    }
}