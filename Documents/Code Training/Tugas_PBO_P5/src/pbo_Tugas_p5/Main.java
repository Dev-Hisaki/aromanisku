package pbo_Tugas_p5;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Prices harga = new Prices();
        Regular2D regular2D = new Regular2D();
        Regular3D regular3D = new Regular3D();
        Velvet velvet = new Velvet();
        MainMenu mainMenu = new MainMenu();
        Scanner scanner = new Scanner(System.in);

        int key, orderTicket, tempSumOrder = 0, looping = 1, sumOrder = 0;
        char confirm;

        harga.showTicketPrices();

        regular2D.filmName = "Naruto";
        regular2D.hargaTiket = 30000;
        regular2D.showTicketPrices();
        regular2D.showDesc();

        regular3D.filmName = "Upin & Ipin";
        regular3D.hargaTiket = 50000;
        regular3D.showTicketPrices();
        regular3D.showDesc();

        velvet.filmName = "IDK what velvet film is";
        velvet.hargaTiket = 100000;
        velvet.showTicketPrices();
        velvet.showDesc();

        while (looping == 1) {
            mainMenu.showMenu();
            System.out.println("Masukan Input : ");

            key = scanner.nextInt();

            switch (key) {
                case 1:
                    System.out.println("Masukan jumlah tiket : ");

                    orderTicket = scanner.nextInt();
                    tempSumOrder = orderTicket * regular2D.hargaTiket;
                    sumOrder = sumOrder + tempSumOrder;

                    System.out.println("Subtotal : Rp." + sumOrder);
                    System.out.println("Apakah masih ingin mengorder? y/n");
                    confirm = scanner.next().charAt(0);

                    if (confirm == 'y') {

                    } else if (confirm == 'n') {
                        looping = 0;
                    }

                    break;

                case 2:

                    System.out.println("Masukan jumlah tiket : ");

                    orderTicket = scanner.nextInt();
                    tempSumOrder = orderTicket * regular3D.hargaTiket;
                    sumOrder = sumOrder + tempSumOrder;

                    System.out.println("Subtotal : Rp." + sumOrder);
                    System.out.println("Apakah masih ingin mengorder? y/n");
                    confirm = scanner.next().charAt(0);

                    if (confirm == 'y') {

                    } else if (confirm == 'n') {
                        looping = 0;
                    }

                    break;

                case 3:

                    System.out.println("Masukan jumlah tiket : ");

                    orderTicket = scanner.nextInt();
                    tempSumOrder = orderTicket * velvet.hargaTiket;
                    sumOrder = sumOrder + tempSumOrder;

                    System.out.println("Subtotal : Rp." + sumOrder);
                    System.out.println("Apakah masih ingin mengorder? y/n");
                    confirm = scanner.next().charAt(0);

                    if (confirm == 'y') {

                    } else if (confirm == 'n') {
                        looping = 0;
                    }

                    break;

                default:

                    System.out.println("Pilihan tidak ada silahkan input kembali");
                    break;
            }

        }
        System.out.println("Pesanan selesai\nSilahkan membayar sebesar : Rp." + sumOrder);
        scanner.close();
    }
}
