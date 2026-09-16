// GukiZ and Contest

import java.util.Scanner;

public class Y {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int [] arr = new int[n];
        for(int i = 0 ; i < n ; i++)
            arr[i] = in.nextInt();

        for(int i = 0 ; i < n ; i++) {
            int counter = 1;
            for(int j = 0 ; j < n ; j++) {
                if(i == j) continue;
                if (arr[i] < arr[j]) {
                    counter++;
                }
            }
            System.out.print(counter + " ");
        }

        in.close();

    }
}