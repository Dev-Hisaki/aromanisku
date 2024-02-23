package hisaki;

public class Jajanan_Lathif {

    // Indentifikasi Indentifier / Variabel / Atribut
    
    public String rasa;
    public float harga;
    private String warna;
    protected int berat;
    String parameter;

    // Jajanan_Latif(String rasa_inp, float harga_inp, String warna_inp, int
    // berat_inp, String parameter_tambah)
    // {
    // this.rasa = rasa_inp;
    // this.harga = harga_inp;
    // this.warna = warna_inp;
    // this.berat = berat_inp;
    // this.parameter = parameter_tambah;
    // }

    void cetak_private() {
        warna = "Unguuu";
        System.out.print("private Warna Object : " + warna);
    }

    void cetak_object() {
        System.out.println("Rasa dari Objek " + this.parameter + " rasanya : " + this.rasa);
        System.out.println("Harga dari Objek " + this.parameter + " harganya : " + this.harga);
        System.out.println("warna dari objek " + this.parameter + " warnanya : " + this.warna);
        System.out.println("berat dari Objek " + this.parameter + " beratnya : " + this.berat);
        System.out.println("=========================================================");
    }

}
