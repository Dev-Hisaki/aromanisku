#include <iostream>
using namespace std;

int main()
{
    string Nama;
    string pw;
    bool perulangan = true;
    int tigasalah = 0;

    while (perulangan == true && tigasalah < 3)
    {

        cout << "Username : ";
        cin >> Nama;
        cout << "Password : ";
        cin >> pw;

        if (Nama == "Haidar" && pw == "ABCDE")
        {
            cout << "Login Succes" << endl;
            perulangan = false;
        }
        else
        {
            cout << "Password Salah" << endl;
            tigasalah++;
        }
    }
    if (tigasalah == 3)
    {
        cout << "Anda salah memasukan pw 3x silahkan hubungi operator";
    }
}