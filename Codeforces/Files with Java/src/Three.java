// Write a code to solve problem by using two pointers technique

import java.util.Scanner;

public class Three{
    static public  void main(String[] args) {

        Scanner input = new Scanner(System.in);

        short t;
        t = input.nextShort();

        while(t > 0) {
            short n;
            n = input.nextShort();

            int[] arr = new int[n];
            for(int i = 0 ; i < n ; i++)
                arr[i] = input.nextInt();

            int left = 0 , right = n-1;
            boolean isLeft = true;
            int[] newarr = new int[n];
            int i = 0;

            while(left <= right) {
                if(isLeft)
                    newarr[i++] = arr[left++];
                else
                    newarr[i++] = arr[right--];

                isLeft = ! isLeft;
            }
            for(int j = 0 ; j < n ; j++)
                System.out.print(newarr[j] + " ");
            System.out.println();
            t--;
        }
    }
}