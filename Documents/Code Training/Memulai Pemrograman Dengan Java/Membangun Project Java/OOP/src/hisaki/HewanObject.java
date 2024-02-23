package hisaki;

public class HewanObject {
    String nama;
    int berat;
    int jmlkaki;

    public HewanObject(String namaHewan){
        nama = namaHewan;
    }

    public void beratHewan(int beratHewan){
        berat = beratHewan;
    }

    public void jmlhkakiHewan(int jmlkaki){
        this.jmlkaki = jmlkaki;
    }
    public void cetakNama(){
        System.out.println("Nama hewan : " + nama);
        System.out.println("Berat hewan : " + berat + " kg");
        System.out.println("Jumlah Kaki hewan : " + jmlkaki);
    }
}
