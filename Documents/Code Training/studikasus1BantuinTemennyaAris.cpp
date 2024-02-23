#include<iostream>
using namespace std;

int main(){
	int menu, jumlah, total, x, y, m, n,a,b,c;
	float h1, h2, h3;
	
	cout<<"Menu : "<<endl;
	cout<<"1. Ayam goreng : 17.000 "<<endl;
	cout<<"2. Ayam bakar  : 21.000 "<<endl;
	cout << "Masukan Jumlah Pembelian Ayam Goreng : ";
	cin >> h1;
	cout << "\nMasukan Jumlah Pembelian Ayam Bakar : ";
	cin >> h2;
	cout<<"3. Ayam goreng dan Ayam bakar : "<<total<<endl;
	
	switch (menu)
    {
            case 1:
            cout<<"Jumlah : ";
			cin>>x;
            h1 = x * 17000;
            break;

            case 2:
            cout<<"Jumlah : "; cin>>y;
            h2 = y * 21000;
            break;

            case 3:
            cout<<"Jumlah ayam goreng : "; cin>>m;
            cout<<"Jumlah ayam bakar : "; cin>>n;
            h3 = (m * 17000) + (n * 21000);
            break;

	if(h1>45000){
		a = h1 - (h1 * 0,1);
	}
	else if(h2>45000){
		b = h2 - (h2 * 0,1);
	}
	else(h3>45000);{
		c = h3 - (h3 * 0,1);
	}
	return 0;
	}
}
