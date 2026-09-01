// Sereja and Dima
// Write a code to solve problem by using two pointers technique

import java.util.Scanner;

public class One {
    public static void main(String[] argv) {

        Scanner input = new Scanner(System.in);
        int n;
        n = input.nextInt();

        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++)
            arr[i] = input.nextInt();

        int left = 0 , right = n-1;
        int sum1 = 0 , sum2 = 0;
        boolean serejaTurn = true;

        while(left <= right) {
            int chosenCard;
            if(arr[left] > arr[right]) {
                chosenCard = arr[left];
                left++;
            }else {
                chosenCard = arr[right];
                right--;
            }

            if(serejaTurn) {
                sum1 += chosenCard;
            }else {
                sum2 += chosenCard;
            }

            serejaTurn = !serejaTurn;
        }

        System.out.println(sum1 + " " + sum2);
    }
}