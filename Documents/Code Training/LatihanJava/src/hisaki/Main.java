package hisaki;

public class Main {
    /*
     * File : Pengenalan Kelas dan Object (main.java)
     * Deksripsi : Indentifikasi kasus kelas dan object pada jajanan Latif.
     */

    public static void main(String[] args) {

        System.out.println("Hello 4a, Saya Bagas");

        System.out.println("-------------- Kelas dan Object --------------");
        // Membuat Object, Objectnya Cimol
        // nama_kelas nama_object = new nama_kelas();
        // Jajanan_Latif cimol = new Jajanan_Latif("Gurihhhh
        // enak",3000,"putih",1,"CIMOL");
        // cimol.cetak_object();
        Jajanan_Lathif cimol = new Jajanan_Lathif();
        cimol.rasa = "Mantappppp"; // public
        // cimol.warna = "Biruuuuu";
        System.out.println("Cetak Cimol Rasa Public : " + cimol.rasa);
        // System.out.println("Cetak Cimol Rasa Public : "+cimol.warna);
        cimol.cetak_private();

        // Membuat objek kedua
        // Jajanan_Latif Takoyaki = new
        // Jajanan_Latif("Asin",10000,"coklat",5,"Takoyaki");
        // Takoyaki.cetak_object();

    }
}