// Five in One

import java.util.Scanner;

public class O {
    public static void main(String [] args) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
        }

        System.out.println("The maximum number : " + findMax(arr));
        System.out.println("The minimum number : " + findMin(arr));
        System.out.println("The number of prime numbers : " + getPrime(arr));
        System.out.println("The number of palindrome numbers : " + getPalindrome(arr));
        System.out.println("The number that has the maximum number of divisors : " + maxDivisors(arr));

        in.close();

    }

    // Find maximum element in array
    static int findMax(int[] arr) {
        int maxElement = arr[0];
        for(int i = 1 ;  i < arr.length ; i++) {
            if(arr[i] > maxElement)
                maxElement = arr[i];
        }
        return maxElement;
    }

    // Find minimum element in array
    static int findMin(int []arr) {
        int minElement = arr[0];
        for(int i = 1 ;  i < arr.length ; i++) {
            if(arr[i] < minElement)
                minElement = arr[i];
        }
        return minElement;
    }

    // Find number of prime elements in array
    static int getPrime(int[] arr) {
        int counter = 0;
        for(int i = 0 ; i < arr.length ; i++) {
            int num = arr[i];
            boolean isPrime = true;

            if(num == 1) isPrime = false;
            else {
                for(int j = 2 ; j*j <= num ; j++) {
                    if(num%j == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
            if(isPrime)
                counter++;
        }
        return counter;
    }

    // Find number of palindrome element in array
    static int getPalindrome(int[] arr) {
        int counter = 0;
        for(int i = 0 ; i < arr.length ; i++) {
            int num = arr[i];
            int original = num;
            int reverse = 0;
            while(num > 0) {
                reverse = reverse*10 + (num%10);
                num /= 10;
            }
            if(original == reverse) counter++;
        }
        return counter;
    }

    // Find number that has maximum divisors in array
    static int maxDivisors(int []arr) {
        int maxDiv = arr[0];
        int maxCounter = 0;
        for(int i = 0 ; i < arr.length ; i++) {
            int counter = 0;
            int num = arr[i];
            for(int j = 1 ; j <= num ; j++) {
                if(num%j == 0) {
                    counter++;
                }
            }
            // إذا وجدنا عدد قواسم أكبر، نحدث القيمة والعدّاد
            if(counter > maxCounter) {
                maxCounter = counter;
                maxDiv = num;
            }
            // إذا تساوى عدد القواسم، نختار العدد الأكبر قيمة بينهما
            else if(counter == maxCounter) {
                if(num > maxDiv) {
                    maxDiv = num;
                }
            }
        }
        return maxDiv;
    }
}