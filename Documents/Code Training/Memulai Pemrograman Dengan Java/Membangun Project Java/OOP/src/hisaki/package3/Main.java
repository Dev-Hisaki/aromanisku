package hisaki.package3;

public class Main {
    public static void main(String[] args) {
        System.out.println("Nilainya adalah " + Perhitungan.val);

        for (int i = 0; i < 5; i++) {
            new Perhitungan();
        }

        System.out.println("Sampai " + Perhitungan.val);

        System.out.println("getNilai memiliki nilai " + Perhitungan.getValue());
    }

    // Hanya bisa diakses oleh satu thread
    public synchronized void showData(){

    }
}
