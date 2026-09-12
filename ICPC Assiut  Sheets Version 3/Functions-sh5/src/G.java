// Max and MIN

import java.util.Scanner;

public class G {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        int[] arr = new int[t];
        for(int i = 0 ; i < arr.length ; i++)
            arr[i] = in .nextInt();

        System.out.println(findMin(arr) + " " + findMax(arr));
        in.close();

    }
    static int findMax(int[] arr) {
        int maxElement = arr[0];
        for(int i = 1 ;  i < arr.length ; i++) {
            if(arr[i] > maxElement)
                maxElement = arr[i];
        }
        return maxElement;
    }
    static int findMin(int []arr) {
        int minElement = arr[0];
        for(int i = 1 ;  i < arr.length ; i++) {
            if(arr[i] < minElement)
                minElement = arr[i];
        }
        return minElement;
    }
}