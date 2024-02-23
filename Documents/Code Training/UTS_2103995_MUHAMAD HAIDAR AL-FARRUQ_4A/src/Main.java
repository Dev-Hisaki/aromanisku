import java.util.Scanner;

// Nomor 2
class Discount {
    public double hargaAwal;
    private double potongan;
    private double harga_Setelah_Diskon;

    public double getDiscount() {
        return potongan;
    }

    public double setDiscount(double potonganHarga) {
        return this.potongan = potonganHarga;
    }

    public double hitungDiskon() {
        harga_Setelah_Diskon = hargaAwal - (hargaAwal * getDiscount() / 100);
        return harga_Setelah_Diskon;
    }

    void showString() {
        System.out.println("Harga setelah diskon : Rp." + harga_Setelah_Diskon);
    }

}

// Nomor 3
class Merchant {
    Discount discount = new Discount();
    protected String gift = "Payung";
    public String namaMerchant;

    void CetakInvoice() {
        System.out.println("Pembayaran menggunakan\t: Dana");
    }

    void CetakGift() {
        System.out.println("Hadiah\t\t\t: " + gift);
    }
}

class Dana extends Merchant {
    double totalHarga;

    void InvoiceDana() {
        System.out.println("Total pembayaran\t: " + totalHarga);
    }
}

public class Main {
    static double inputDiscount;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Discount discount = new Discount();
        Dana dana = new Dana();

        // Input data
        System.out.println("Masukan harga produk :");
        discount.hargaAwal = scanner.nextDouble();
        System.out.println("Masukan potongan harga : ");
        inputDiscount = scanner.nextDouble();

        // Menghitung Harga
        discount.setDiscount(inputDiscount);
        discount.hitungDiskon();
        discount.showString();

        // Menghitung Diskon Dana
        dana.totalHarga = discount.hitungDiskon() - (discount.hitungDiskon() / 4);
        dana.CetakInvoice();
        dana.InvoiceDana();
        dana.CetakGift();

        scanner.close();
    }
}
