// Booby Prize

import java.util.Arrays;
import java.util.Scanner;

public class S {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        long []arr = new long[n];
        for(int i = 0 ; i < n ; i++)
            arr[i] = in.nextLong();
        solve(arr);
        in.close();
    }

    static void solve(long []arr) {
        //  عمل نسخ حقيقي للمصفوفة بدل الإشارة لنفس المكان
        long []temp = arr.clone();
        Arrays.sort(temp);
        long target = temp[arr.length-2];
        for(int i = 0 ; i < arr.length ; i++) {
            if(target == arr[i]) {
                System.out.println(i+1);
                break;
            }
        }
    }
}