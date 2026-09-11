// String Score

import java.util.Scanner;

public class R {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        String s = in.next();
        char[] arrayS = s.toCharArray();

        int score = 0;
        for(int i = 0 ; i < n ; i++) {
            switch (arrayS[i]) {
                case 'V' :
                    score += 5;
                    break;
                case 'W' :
                    score += 2;
                    break;
                case 'X' :
                    i++;
                    break;
                case 'Y' :
                    if(i != n-1) {
                        char j = arrayS[i+1];
                        int index = i+1;
                        while (index < n - 1) {
                            arrayS[index] = arrayS[index+1] ;
                            index++;
                        }
                        arrayS[n-1] = j;
                    }
                    break;
                case 'Z' :
                    if(i != n-1) {
                        if(arrayS[i+1] == 'V') {
                            score /= 5;
                            i++;
                        }else if(arrayS[i+1] == 'W') {
                            score /= 2;
                            i++;
                        }
                    }
                    break;
                default:
                    break;
            }
        }
        System.out.println(score);
        in.close();

    }
}