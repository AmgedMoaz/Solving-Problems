// 3n + 1 sequence

import java.util.Scanner;

public class Q {
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        System.out.println(getNUmOfSequence(n,1  ));
        in.close();
    }

    static int getNUmOfSequence(int num , int counter) {
        if(num == 1)
            return counter;                                // base case

        counter++;
        if(num%2 == 0)
            return getNUmOfSequence(num/2,counter);   // recursive case
        else {
            int number = 3 * num + 1;
            return getNUmOfSequence(number,counter);       // recursive cae
        }
    }
}