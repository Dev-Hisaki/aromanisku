package hisaki.inheritance;

public class Main {
    public static void main(String[] args) {
        Hewan hewan = new Hewan();
        System.out.println("Apakah Hewan IS-A Objek " + (hewan instanceof Object));
        System.out.println("Apakah Hewan IS-A Hewan " + (hewan instanceof Hewan));
        System.out.println("Apakah Hewan IS-A Kucing " + (hewan instanceof Kucing));

        System.out.println("------------------------------------");

        Kucing kucing = new Kucing();
        System.out.println("Apakah hewan IS-A Objek " + (kucing instanceof Object));
        System.out.println("Apakah hewan IS-A Hewan " + (kucing instanceof Hewan));
        System.out.println("Apakah hewan IS-A Kucing " + (kucing instanceof Kucing));

        System.out.println("------------------------------------");

        hewan.makan();
        kucing.makan(); // Mewarisi methods dari Hewan()
        kucing.makan("Ikan");

        Kucing meow = new Kucing("Ocicat", "Tropis");
        Kucing puss = new Kucing("Ocicat", "Subtropis");
        Kucing nyaa = new Kucing("Anggora", "Subtropis");

        System.out.println(meow.toString());
        System.out.println(puss.toString());
        System.out.println(nyaa.toString());

        System.out.println("meow equals puss ? " + meow.equals(puss));
        System.out.println("meow equals to nyaa ? " + meow.equals(nyaa));
        System.out.println("puss equals to nyaa ? " + puss.equals(nyaa));

        System.out.println("------------------------------------");

        Object o = new Kucing();    // Kucing is an Object
        Hewan h = new Kucing();     // Kucing is a Hewan
        Kucing k = new Kucing();    // Kucing is a Kucing

        // o.makan(); error karena method makan() tidak ada dalam class object
        h.makan();
        k.makan();

        Object object = k;  // Dapat langsung di assign
        Hewan hewank = k;   // Dapat langsung di assign

        // object.makan(); error karena method makan() tidak ada dalam class object
        hewank.makan();

        Kucing kucingk = (Kucing) h;    // Tidak bisa langsung di assign, perlu di casting terlebih dahulu
        kucingk.makan();

        Hewan harimauHewan = new Hewan();
        Kucing anggoraKucing = (Kucing) harimauHewan;   // Dapat di compile tetapi error pada runtime ClassCastException

        Mamalia mamalia = new Kucing();
    }
}
