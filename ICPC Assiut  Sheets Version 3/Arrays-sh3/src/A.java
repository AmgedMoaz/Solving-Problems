// Summation

import java.util.Scanner;

public class A {
    public static void main(String []argv)  {

     Scanner in = new Scanner(System.in);

     int n = in.nextInt();
     long[] arr = new long[n];

     long sum = 0;
     for(int i = 0 ; i < n ; i++) {
         arr[i] = in.nextLong();
         sum += arr[i];
     }
        System.out.println(Math.abs(sum));
     in.close();

    }
}