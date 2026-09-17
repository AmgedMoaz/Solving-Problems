// Summation

import java.util.Scanner;

public class L {
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int [] arr = new int[n];
        for(int i = 0 ; i < n ; i++)
            arr[i] = in.nextInt();
        System.out.println(sum(arr,0,0));
        in.close();
    }
    static long sum(int arr[] , int index , long sum) {
        if(index == arr.length)
            return sum;         // base case

        sum += arr[index];
        return sum(arr,index+1 ,sum);
    }
}