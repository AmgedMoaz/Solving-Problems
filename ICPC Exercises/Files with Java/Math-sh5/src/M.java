// Polycarp and the Day of Pi

import java.util.Scanner;

public class M {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        String pi = "314159265358979323846264338327";
        char[] arr1 = pi.toCharArray();
        String in;
        while(t-- > 0) {
            in = scanner.next();
            char[] arr2 = in.toCharArray();
            int counter = 0;
            for(int i = 0 ; i < in.length() ; i++) {
                if(arr1[i] == arr2[i]) {
                    counter++;
                }else {
                    break;
                }
            }
            System.out.println(counter);
        }
        scanner.close();
    }
}