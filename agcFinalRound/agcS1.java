import java.util.Scanner;

public class agcS1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        int islemSayisi = scan.nextInt();

        double dizi[] = new double[n];
        int[][] islemler = new int[islemSayisi][3];
        char[] islemIsaret = new char[islemSayisi];

        for (int i = 0; i < islemSayisi; i++) {
            for (int j = 0; j < 3; j++) {
                islemler[i][j] = scan.nextInt();
            }
            islemIsaret[i] = scan.next().charAt(0);
        }
        for (int i = 0; i < islemSayisi; i++) {
            char islem = islemIsaret[i];
            int k = islemler[i][2];
            int ilkIndex = islemler[i][0] - 1; 
            int sonIndex = islemler[i][1] - 1;

            if (islem == '+') {
                for (int j = ilkIndex; j <= sonIndex; j++) {
                    dizi[j] += k;
                }
            } else if (islem == '-') {
                for (int j = ilkIndex; j <= sonIndex; j++) {
                    dizi[j] -= k;
                }
            } else if (islem == '/') {
                for (int j = ilkIndex; j <= sonIndex; j++) {
                    dizi[j] /= k;
                }
            } else if (islem == '*') {
                for (int j = ilkIndex; j <= sonIndex; j++) {
                    dizi[j] *= k;
                }
            } else if (islem == 's') {
                if (k == 0) {
                    double tmp = dizi[ilkIndex];
                    dizi[ilkIndex] = dizi[sonIndex];
                    dizi[sonIndex] = tmp;
                } else if (k == 1) {
                    int tmpIlk = ilkIndex;
                    int tmpSon = sonIndex;
                    while (tmpIlk < tmpSon) {
                        double tmp = dizi[tmpIlk];
                        dizi[tmpIlk] = dizi[tmpSon];
                        dizi[tmpSon] = tmp;
                        tmpIlk++;
                        tmpSon--;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            System.out.print(dizi[i] + "  ");
        }

        scan.close();
    }
}