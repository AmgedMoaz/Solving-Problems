// Team Olympiad

import java.util.ArrayList;
import java.util.Scanner;

public class Y {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        ArrayList<Integer> arr1 = new ArrayList<>();
        ArrayList<Integer> arr2 = new ArrayList<>();
        ArrayList<Integer> arr3 = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int skill = in.nextInt();
            if (skill == 1) {
                arr1.add(i + 1);
            } else if (skill == 2) {
                arr2.add(i + 1);
            } else {
                arr3.add(i + 1);
            }
        }

        int minTeam = Math.min(arr1.size(), Math.min(arr2.size(), arr3.size()));
        System.out.println(minTeam);

        for (int i = 0; i < minTeam; i++) {
            System.out.println(arr1.get(i) + " " + arr2.get(i) + " " + arr3.get(i));
        }
        in.close();
    }
}