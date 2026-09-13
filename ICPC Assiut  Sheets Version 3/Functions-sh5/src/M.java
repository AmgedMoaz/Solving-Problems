// Distinct Numbers

import java.util.Scanner;

public class M {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int[] arr = new int[n];
        for (int i = 0 ; i < n ; i++)
            arr[i] = in.nextInt();

        System.out.println(getDistinct(arr,n));
        in.close();

    }
    static int getDistinct(int []arr , int n) {
      int counter = 0;
      for(int i = 0 ; i < n ; i++) {
          boolean isDistinct = true;
          for(int j = i+1 ; j < n ; j++) {
              if(arr[i] == arr[j]) {
                  isDistinct = false;
                  break;
              }
          }
          if (isDistinct)
              counter++;
      }
      return counter;
    }
}