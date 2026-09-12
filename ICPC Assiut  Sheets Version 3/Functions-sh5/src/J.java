// Average

import java.util.Scanner;

public class J {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        double[] arr = new double[n];
        for(int i = 0 ; i < n ; i++)
            arr[i] = in.nextFloat();

        System.out.printf("%.6f%n",avg(arr,n));
        in.close();

    }
    static double avg(double[] arr , int num) {
        double sum = 0.0f;
        for(int i = 0 ; i < num ; i++) {
            sum += arr[i];
        }
        return (sum/num);
    }
}