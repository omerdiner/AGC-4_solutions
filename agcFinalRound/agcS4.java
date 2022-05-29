import java.util.Scanner;

public class agcS4 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int m;
        int n = scan.nextInt();
        do {
            m = scan.nextInt();
            if (m % 2 == 0)
                System.out.println("ikinci matrisin boyutu uygun değil.Tekrar gir.");
        } while (m % 2 == 0 || m < 3);


        int matris[][] = new int[n][n];
        int keskinlestirilmis[][] = new int[n][n];

        float islemler[][] = new float[m][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matris[i][j] = scan.nextInt();
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                keskinlestirilmis[i][j] = matris[i][j];
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                islemler[i][j] = scan.nextFloat();
            }
        }

        int sinir = m / 2;

        for (int i = sinir; i <= n - sinir - 1; i++) {
            for (int j = sinir; j <= n - sinir - 1; j++) {
                keskinlestirilmis[i][j] = hesapla(matris, islemler, m, i, j);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(keskinlestirilmis[i][j] + " ");
            }
            System.out.println();
        }

    }

    public static int hesapla(int matris[][], float islemler[][], int m, int i, int j) {
        double sonuc = 0;

        for (int x = i - m / 2, x1 = 0; x1 < m; x++, x1++) {
            for (int y = j - m / 2, y1 = 0; y1 < m; y1++, y++) {
                sonuc += (matris[x][y] * islemler[x1][y1] / (m * m));
            }
        }
        return (int) sonuc;
    }

}
