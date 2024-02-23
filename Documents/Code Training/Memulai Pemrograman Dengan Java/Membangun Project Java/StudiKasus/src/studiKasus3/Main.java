package studiKasus3;

import java.util.Scanner;

public class Main {

    private static char pilihan;
    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        PersegiPanjang pp;
        SegitigaSiku ss;
        Lingkaran o;
        int s1, s2, r;

        pp = new PersegiPanjang();
        ss = new SegitigaSiku();
        o = new Lingkaran();

        mainMenu();

        switch (pilihan) {
            case '1':
                System.out.println("Masukan panjang persegi : ");
                s1 = scanner.nextInt();
                System.out.println("Masukan lebar persegi : ");
                s2 = scanner.nextInt();
                System.out.println("Luas persegi panjang : " + pp.luas(s1, s2));
                System.out.println("Keliling persegi panjang : " + pp.keliling(s1, s2));
                break;
            case 2:
                System.out.println("Masukan tinggi segitiga siku-siku : ");
                s1 = scanner.nextInt();
                System.out.println("Masukan lebar segitiga siku-siku : ");
                s2 = scanner.nextInt();
                System.out.println("Luas segitiga siku-siku : " + ss.luas(s1, s2));
                System.out.println("Keliling segitiga siku-siku : " + ss.keliling(s1, s2));
                break;
            case 3:
                System.out.println("Masukan jari-jari : ");
                r = scanner.nextInt();
                System.out.println("Luas lingkaran : " + o.luas(r));
                System.out.println("Keliling lingkaran : " + o.keliling(r));
                break;
            default:
                System.out.println("Pilihan tidak ada");
                break;
        }
    }

    private static void mainMenu() {
        System.out.println("-------------------------");
        System.out.println("Hitung Luas dan Keliling");
        System.out.println("1. Persegi Panjang");
        System.out.println("2. Segitiga Siku-siku");
        System.out.println("3. Lingkaran");
        System.out.println("Masukan input : ");
        pilihan = scanner.next().charAt(0);
    }
}
