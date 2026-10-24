// Elgoker's Red Eye

import java.io.*;
import java.util.*;

public class Z {
    public static void main(String[] args) throws IOException {
        DataInputStream in = new DataInputStream(new BufferedInputStream(System.in, 1 << 16));

        // قراءة السلسلة
        StringBuilder sb = new StringBuilder();
        int c = in.read();
        while (c < 'a' || c > 'z') c = in.read();
        while (c >= 'a' && c <= 'z') {
            sb.append((char) c);
            c = in.read();
        }
        char[] s = sb.toString().toCharArray();
        int n = s.length;

        // بناء جدول الـ palindrome
        boolean[][] dp = new boolean[n][n];
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                if (s[i] == s[j] && (j - i < 2 || dp[i + 1][j - 1])) {
                    dp[i][j] = true;
                }
            }
        }

        // قراءة عدد الاستعلامات
        int q = nextInt(in);

        StringBuilder out = new StringBuilder();
        while (q-- > 0) {
            int l = nextInt(in) - 1;
            int r = nextInt(in) - 1;
            out.append(dp[l][r] ? "YES\n" : "NO\n");
        }
        System.out.print(out);
    }

    private static int nextInt(DataInputStream in) throws IOException {
        int ret = 0;
        int b = in.read();
        while (b < '0' || b > '9') b = in.read();
        while (b >= '0' && b <= '9') {
            ret = ret * 10 + (b - '0');
            b = in.read();
        }
        return ret;
    }
}