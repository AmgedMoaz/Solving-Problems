// President's Office

import java.util.Scanner;
import java.util.HashSet;

public class I {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int m = in.nextInt();
        char president = in.next().charAt(0);

        char[][] office = new char[n][m];
        for (int i = 0; i < n; i++) {
            office[i] = in.next().toCharArray();
        }

        HashSet<Character> deputies = new HashSet<>();

        int[] dx = {-1, 1, 0, 0};
        int[] dy = {0, 0, -1, 1};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (office[i][j] == president) {
                    for (int k = 0; k < 4; k++) {
                        int ni = i + dx[k];
                        int nj = j + dy[k];

                        if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                            char neighbor = office[ni][nj];
                            if (neighbor != president && neighbor != '.') {
                                deputies.add(neighbor);
                            }
                        }
                    }
                }
            }
        }

        System.out.println(deputies.size());
        in.close();

    }
}