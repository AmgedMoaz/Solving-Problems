// Palindromes Replace

import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s = in.next();
        char[] arr = s.toCharArray();
        for(int i = 0 , j = s.length()-1 ; i <= j ; i++,j--) {
            if(arr[i] == '?' && arr[j] == '?') {
                arr[i] = 'a';
                arr[j] = 'a';
            }else if(arr[i] == '?') {
                arr[i] = arr[j];
            }else if(arr[j] == '?') {
                arr[j] = arr[i];
            }else if(arr[i] != arr[j]) {
                System.out.println(-1);
                return;
            }
        }
        System.out.println(new String(arr));
        in.close();
    }
}