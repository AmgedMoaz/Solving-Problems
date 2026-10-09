// Cakeminator

import java.util.Scanner;

public class N {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int r = in.nextInt();
        int c = in.nextInt();

        int []row = new int[r];
        int []col = new int[c];
        for(int i = 0 ; i < r ; i++)    row[i] = 0;
        for(int j = 0 ; j < c ; j++)   col[j] = 0;

        for(int i = 0 ; i < r ; i++) {
            String line = in.next();
            for(int j = 0 ; j < c ; j++) {
                if(line.charAt(j) == 'S') {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        int count = 0;
        for(int i = 0 ; i < r ; i++) {
            for(int j = 0 ; j < c ; j++) {
                if(row[i] == 0 || col[j] == 0) {
                    count++;
                }
            }
        }
        System.out.println(count);
        in.close();
    }
}