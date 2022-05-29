

import java.util.Scanner;

public class agcS6 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        // n*m
        int n = scan.nextInt();
        int m = scan.nextInt();
        int[][] matris = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matris[i][j] = scan.nextInt();
            }
        }
        System.out.print(max(matris, n, m));
        scan.close();
    }

    public static int max(int[][] matris, int n, int m) {


        int[][] toplam = new int[n + 1][m + 1];


        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < m + 1; j++) {

                toplam[i][j] = Math.max(toplam[i - 1][j],
                        toplam[i][j - 1]) +
                        matris[i - 1][j - 1];
            }
        }

        return toplam[n][m];
    }
}