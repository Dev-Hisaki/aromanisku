import java.util.Scanner;

public class Main {
    public int お金 = 0;

    public static void main(String[] args) {
        Scanner スケンナ = new Scanner(System.in);

        Ovo オフォ = new Ovo();
        Dana ダナ = new Dana();
        Tunai ツナイ = new Tunai();

        System.out.println("Harga VGA : ");
        int お金 = スケンナ.nextInt();

        System.out.println("==========================================>>>>>");
        System.out.println("Nama\t: Muhamad Haidar Al-Farruq");
        System.out.println("NIM\t\t: 2103995");
        System.out.println("Program Studi Teknik Komputer 4A");
        System.out.println("\tProgram Diskon Toko eTEKKOM");
        System.out.println("==========================================>>>>>");
        System.out.println("Barang yang dibeli\t: VGA\nHarga\t\t\t: " + お金);
        System.out.println("Pilih metode pembayaran :\n[1] OVO\n[2] Dana\n[3] Tunai");
        System.out.println("Input (1-3)");
        int pilihan = スケンナ.nextInt();
        switch (pilihan) {
            case 1:
                オフォ.Discount(お金);
                break;
            case 2:
                ダナ.Discount(お金);
                break;
            case 3:
                ツナイ.Discount(お金);
                break;
            default:
                System.out.println("Error! Pilihan tidak ada");
                break;
        }
        スケンナ.close();
    }

    public void Discount(int harga) {

    }
}

class Ovo extends Main {
    @Override
    public void Discount(int harga) {
        harga = harga - ((harga * 3) / 10);
        System.out.println("Selamat!!! Anda mendapatkan potongan harga sebesar 30%");
        System.out.println("Silahkan membayar sebesar : Rp." + harga);

    }
}

class Dana extends Main {
    @Override
    public void Discount(int harga) {
        harga = harga - ((harga / 4));
        System.out.println("Selamat!!! Anda mendapatkan potongan harga sebesar 25%");
        System.out.println("Silahkan membayar sebesar : Rp." + harga);
    }
}

class Tunai extends Main {
    @Override
    public void Discount(int harga) {
        System.out.println("Silahkan membayar sebesar : Rp." + harga);
    }
}
