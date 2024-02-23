package hisaki.propertiesandmethods;

public class Hewan {
    // Inisiali langsung
    double tinggi = 5.5;
    double berat = 10;

    // Inisialisasi dengan constructor
    int umur;

    public Hewan(int umurParam) {
        // umur merupakan properti dari class hewan
        this.umur = umurParam;
        System.out.println("Usia dari hewan ini adalah " + this.umur);
    }

    public void lari(){
        System.out.println("Is running...");
    }

    public void jalan(){
        System.out.println("Is waling...");
    }

    public void makan(){
        System.out.println("Is eating...");
    }

    public double getBerat(){
        return berat;
    }

    public double getTinggi(){
        return tinggi;
    }

    public int getUmur(){
        return umur;
    }
}
