package hisaki;

import hisaki.accessmodifier.kelasA;
import hisaki.propertiesandmethods.Hewan;

public class Main {
    public static void main(String[] args) {
        HewanObject Kera = new HewanObject("Kera");
        HewanObject Burung = new HewanObject("Burung");

        Kera.beratHewan(5);
        Kera.jmlhkakiHewan(2);
        Kera.cetakNama();

        Burung.beratHewan(1);
        Burung.jmlhkakiHewan(2);
        Burung.cetakNama();

        Hewan kucing = new Hewan(2);
        kucing.makan();
        kucing.jalan();
        kucing.lari();

        System.out.println("Berumur " + kucing.getUmur());
        double bmi = kucing.getBerat() / ((kucing.getTinggi() * 0.01) * (kucing.getTinggi() * 0.01));
        System.out.println("Indeks massa tubuhnya adalah " + bmi);

        kelasA kelasA = new kelasA();
 
        System.out.println(kelasA.functionB());
 
        System.out.println(kelasA.memberB);
        System.out.println(kelasA.memberC);
    }
}
