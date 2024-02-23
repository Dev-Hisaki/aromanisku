#include <iostream>
using namespace std;

int isiPancasila(int isiMainMenu){

    switch (isiMainMenu)
    {
    case 1:
        cout << "Isi dari sila pertama adalah : " << endl;
        cout << "Ketuhanan Yang Maha Esa" << endl;
        break;

    case 2:
        cout << "Isi dari sila Kedua adalah : " << endl;
        cout << "Kemanusiaan yang adil dan Beradab" << endl;
        break;
    
    case 3:
        cout << "Isi dari sila Ketiga adalah : " << endl;
        cout << "Persatuan Indonesia" << endl;
        break;

    case 4:
        cout << "Isi dari sila Keempat adalah : " << endl;
        cout << "Kerakyatan yang dipimpin oleh hikmah kebijaksanaan dalam permusyawaratan/perwakilan" << endl;
        break;
    
    case 5:
        cout << "Isi dari sila Kelima adalah : " << endl;
        cout << "Keadilan bagi seluruh rakyat Indonesia" << endl;
        break;

    default:
        cout << "Input Tidak Ditemukan" << endl;
        cout << "Masukan Input Kembali : ";
        cin >> isiMainMenu;
    }
}

int maknaSimbol(int isiMaknaSimbol){

    switch(isiMaknaSimbol){
        case 1:
            cout << "Bintang Emas\nLambang bintang tersebut memiliki makna sebagai sebuah cahaya, yaitu yang dipancarkan oleh Tuhan Yang Maha Esa kepada umat manusia." << endl;
            break;
        case 2:
            cout << "Rantai Emas\nMata rantai dalam simbol tersebut berbentuk persegi dan lingkaran yang saling mengaitkan." << endl;
            break;
        case 3:
            cout << "Pohon Beringin\nPohon beringin dengan akar yang menjulur ke bawah diartikan sebagai tempat berteduh. Jadi, Pancasila sebagai dasar negara diibaratkan sebagai peneduh bangsa Indonesia untuk berlindung dan merasa aman." << endl;
            break;
        case 4:
            cout << "Kepala Banteng\nBanteng diartikan sebagai hewan sosial yang suka berkumpul dan bergerombol. Saat banteng berkumpul, menjadi lebih kuat dan sulit diserang lawan." << endl;
            break;
        case 5:
            cout << "Padi dan Kapas\nSetiap warga Indonesia berhak atas pangan dan sandang secara adil dan setara tanpa membeda-bedakan. Terpenuhinya pangan dan sandang, merupakan syarat suatu negara dianggap sejahtera." << endl;
            break;
        default:
        cout << "Input Tidak Ditemukan" << endl;
        cout << "Masukan Input Kembali : ";
        cin >> isiMaknaSimbol;
    }
}

int contohPancasila(int isiContohPancasila){

    string temp = "Contoh dari sila ke ";
    switch (isiContohPancasila)
    {
    case 1:
        cout << temp << isiContohPancasila << " adalah Menghormati teman, tetangga, maupun saudara yang berbeda agama dan kepercayaan saat melaksanakan ibadah sesuai agama dan kepercayaannya masing-masing" << endl;;
        break;
    case 2:
        cout << temp << isiContohPancasila << " adalah Jangan memiliki semena-mena terhadap orang lain. Menjunjung tinggi nilai-nilai kemanusiaan." << endl;;
        break;
    case 3:
        cout << temp << isiContohPancasila << " adalah Mengutamakan kepentingan bersama daripada kepentingan pribadi ataupun kepentingan kelompok." << endl;
        break;
    case 4:
        cout << temp << isiContohPancasila << " adalah Mengutamakan musyawarah dalam mengambil keputusan untuk kepentingan bersama." << endl;
        break;
    case 5:
        cout << temp << isiContohPancasila << " adalah Tidak menggunakan hak milik untuk bertentangan dengan atau merugikan kepentingan umum." << endl;
        break;
  
    default:
        cout << "Input Tidak Ditemukan" << endl;
        cout << "Masukan Input Kembali : ";
        cin >> isiContohPancasila;
    }
}

int main (){

    int input1, input2;
    bool mengulang = true;
    string konfirmasi;

    string anggota[] = {"Azka Ermawa Diwangsa", "Hilwan Nasep", "Jorgha Akram Aryandi", "Muhamad Haidar Al-Farruq", "Rayhan Fatih Abdurrahman", "Yunus Ilyasa"};
    string pancasila[] = {"Ketuhanan", "Kemanusiaan", "Persatuan", "Musyawarah", "Keadilan"};
    string apaitupancasila[] = {"Isi ", "Makna SImbol ", "Mengenai ", "Perilaku-perilaku yang mencerminkan "};

    cout << "==============================" << endl;
    cout << "PR0J3KT P4NC45IL4" << endl;
    cout << "Kelompok 5 Teknik Komputer 1A" << endl;
    cout << "==============================" << endl;
    for(int x = 0; x < 6; x++){

        cout << "- " << anggota[x] << endl;
    }
    cout << "\n";

    while (mengulang == true){
        cout << "=========================" << endl;
        cout << "Menu Utama" << endl;   // Menampilkan Menu Utama
        cout << "=========================" << endl;
    
        for (int i = 0; i < 4; i++) {

            cout << i + 1 << ". " << apaitupancasila[i] << "Pancasila" << endl;
        }

        cout << "Silahkan Pilih Kategori (Input 1-5) : ";
        cin >> input1;
        cout << endl;

        if(input1 != 3){
        // Menampilkan Sub Menu
        for (int i = 0; i < 5; i++) {

        cout << i + 1 << ". " << pancasila[i] << endl;
        }

        cout << "Silahkan Pilih Sub-Kategori (Input 1-5) : ";
        cin >> input2;
        cout << endl;

            switch (input1)
            {
            case 1:
                isiPancasila(input2);
                break;
            case 2:
                maknaSimbol(input2);
                break;
            case 4:
                contohPancasila(input2);
                break;
            
            default:
                break;
            }
        } else {

            cout << "\nPancasila berasal dari bahasa sanskerta, yaitu dari kata panca (lima) dan sila (prinsip atau asas).\nPancasila merupakan dasar negara dan pandangan hidup bangsa Indonesia yang di dalamnya terkandung nilai pokok.\nNilai - nilai tersebut dijadikan landasan pokok bagi setiap penyelenggaraan tata negara dan kehidupan rakyat Indonesia.\nKedudukan pancasila sebagai dasar negara membawa konsekuensi bagi bangsa Indonesia untuk mewujudkan nilai - nilai setiap sila pancasila dalam kehidupan sehari-hari.\nMengamalkan sila-sila pancasila merupakan tanggung jawab segenap rakyat Indonesia.\n" << endl;
        }
        cout << "\nSelesai?" << endl;
        cout << "y/n : ";
        cin >> konfirmasi;
        cout << endl;

        if(konfirmasi == "y"){

            mengulang = false;
        }
    }
}