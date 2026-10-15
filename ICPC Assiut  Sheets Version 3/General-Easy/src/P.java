// Police Recruits

import java.util.Scanner;

public class P {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int counter = 0 , sum = 0;
        for(int i = 0 ; i < n ; i++) {
            int x;
            x = in.nextInt();
            if(x > 0) {
                sum += x;
            }else {
                if(sum > 0) {
                    sum += x;
                }else {
                    counter++;
                }
            }
        }
        System.out.println(counter);
        in.close();
    }
}