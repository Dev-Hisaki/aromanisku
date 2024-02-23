#include <iostream>
using namespace std;

int main()
{
    int listHarga[] = {125, 7500, 9000, 30000, 45000, 35000, 40000};

    int fc = listHarga[0];
    int aEmpat = listHarga[1];
    int fEmpat = listHarga[2];
    int hardCover = listHarga[3];
    int buku = listHarga[4];
    int fotoAEmpat = listHarga[5];
    int fotoFEmpat = listHarga[6];

    int pilihBarang, jumlahOrder, pembayaran, total;

    string daftarMenu[] = {"Foto Copy",
                           "Jilid A4",
                           "Jilid F4",
                           "Jilid Hard Cover",
                           "Jilid Buku",
                           "Cetak Foto A4",
                           "Cetak Foto F4"};

    cout << "#     #    #    #     #    #    ######  ####### #     #" << endl;
    cout << "#  #  #   # #   #     #   # #   #     # #     #  #   # " << endl;
    cout << "#  #  #  #   #  #     #  #   #  #     # #     #   # #  " << endl;
    cout << "#  #  # #     # ####### #     # ######  #     #    #   " << endl;
    cout << "#  #  # ####### #     # ####### #     # #     #    #   " << endl;
    cout << "#  #  # #     # #     # #     # #     # #     #    #   " << endl;
    cout << " ## ##  #     # #     # #     # ######  #######    #   " << endl;
    cout << "                                                       " << endl;
    cout << "####### ####### ####### #######                        " << endl;
    cout << "#       #     #    #    #     #                        " << endl;
    cout << "#       #     #    #    #     #                        " << endl;
    cout << "#####   #     #    #    #     #                        " << endl;
    cout << "#       #     #    #    #     #                        " << endl;
    cout << "#       #     #    #    #     #                        " << endl;
    cout << "#       #######    #    #######                        " << endl;
    cout << "                                                       " << endl;
    cout << " #####  ####### ######  #     #                        " << endl;
    cout << "#     # #     # #     #  #   #                         " << endl;
    cout << "#       #     # #     #   # #                          " << endl;
    cout << "#       #     # ######     #                           " << endl;
    cout << "#       #     # #          #                           " << endl;
    cout << "#     # #     # #          #                           " << endl;
    cout << " #####  ####### #          #                           " << endl;

    cout << "======================================" << endl;
    cout << "Daftar Harga Fotocopy" << endl;
    cout << "======================================" << endl;
    cout << "1. Foto Copy       : Rp. " << fc << endl;
    cout << "2. Jilid A4        : Rp. " << aEmpat << endl;
    cout << "3. Jilid F4        : Rp. " << fEmpat << endl;
    cout << "4. Jilid Hardcover : Rp. " << hardCover << endl;
    cout << "5. Jilid Buku      : Rp. " << buku << endl;
    cout << "6. Cetak Foto A4   : Rp. " << fotoAEmpat << endl;
    cout << "7. Cetak Foto F4   : Rp. " << fotoFEmpat << endl;
    cout << "=======================================" << endl;
    cout << "Masukan Input (1-7) : ";
    cin >> pilihBarang;

    switch (pilihBarang)
    {

    case 1:
        cout << "Masukan Jumlah Pesanan : ";
        cin >> jumlahOrder;
        jumlahOrder = jumlahOrder * fc;
        break;

    case 2:
        cout << "Masukan Jumlah Pesanan : ";
        cin >> jumlahOrder;
        jumlahOrder = jumlahOrder * aEmpat;
        break;

    case 3:
        cout << "Masukan Jumlah Pesanan : ";
        cin >> jumlahOrder;
        jumlahOrder = jumlahOrder * fEmpat;
        break;

    case 4:
        cout << "Masukan Jumlah Pesanan : ";
        cin >> jumlahOrder;
        if (jumlahOrder <= 120)
        {
            jumlahOrder = hardCover;
        }
        else if (jumlahOrder > 120)
        {
            jumlahOrder = (jumlahOrder / 120) * 30000 + 30000;
        }
        break;

    case 5:
        cout << "Masukan Jumlah Pesanan : ";
        cin >> jumlahOrder;
        if (jumlahOrder <= 250)
        {
            jumlahOrder = buku;
        }
        else if (jumlahOrder > 250)
        {
            jumlahOrder = (jumlahOrder / 250) * 30000 + 30000;
        }
        break;

    case 6:
        cout << "Masukan Jumlah Pesanan : ";
        cin >> jumlahOrder;
        if (jumlahOrder < 4)
        {
            jumlahOrder = jumlahOrder * fotoAEmpat;
        }
        else if (jumlahOrder >= 4)
        {
            jumlahOrder = jumlahOrder * fotoAEmpat;
            cout << "Selamat mendapatkan bonus 1x lembar cetak" << endl;
        }
        break;

    case 7:
        cout << "Masukan Jumlah Pesanan : ";
        cin >> jumlahOrder;
        if (jumlahOrder < 4)
        {
            jumlahOrder = jumlahOrder * fotoFEmpat;
        }
        else if (jumlahOrder >= 4)
        {
            jumlahOrder = jumlahOrder * fotoFEmpat;
            cout << "Selamat mendapatkan bonus 1x lembar cetak" << endl;
        }
        break;

    default:
        break;
    }
    cout << "Pesanan anda telah siap, harap membayar sebesar Rp. " << jumlahOrder << endl;
bayarDisini:
    cout << "Uang tunai : ";
    cin >> pembayaran;
    if (pembayaran < jumlahOrder)
    {
        cout << "Maaf uang anda tidak cukup, harap membayar dengan tagihan yang tertera yaitu sebesar " << jumlahOrder << endl;
        goto bayarDisini;
    }
    else
    {
        cout << "Anda membayar sebesar Rp." << pembayaran << " dengan kembalian sebesar Rp." << pembayaran - jumlahOrder << endl;
    }
    cout << "Terimakasih Silahkan Berbelanja Kembali!!!" << endl;
}