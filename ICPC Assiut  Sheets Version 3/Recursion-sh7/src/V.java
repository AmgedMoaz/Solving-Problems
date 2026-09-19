// Creating Expression1

import java.util.Scanner;

public class V {
    static int n;
    static int x;
    static int[] arr;
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        n = in.nextInt();
        x = in.nextInt();

        arr = new int[20];
        for(int i = 0 ; i < n ; i++)
            arr[i] = in.nextInt();

        if(getExpression(arr[0],1))
            System.out.println("YES");
        else
            System.out.println("NO");
        in.close();
    }
    static boolean getExpression(int sum , int index) {
        if(index == n)
            return sum == x;                                                // base case

        boolean sum1 = getExpression(sum + arr[index],index+1);  // recursive case
        boolean sum2 = getExpression(sum - arr[index],index+1);  // recursive case
        return sum1 || sum2;
    }
}