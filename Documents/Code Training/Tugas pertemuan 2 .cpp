#include <iostream>

using namespace std;


void perhitungandiskon(){
int a,b,c,d,e;

cout<<"masukan harga barang (Rp) : ";
cin>>a;

cout<<"masukan diskon (%) : ";
cin>>b;

cout<<"masukan uang yang dibayarkan (Rp) : ";
cin>>c;

cout<<"==============================="<<endl;
d=(a*b)/100;
e=a-d;
cout<<"harga setelah diskon : "<<e<<endl;

cout<<"besar diskon : "<<d<<endl;

cout<<"kembalian sebesar : "<<c-e<<endl;


}


int main(){

cout<<"-------------------------"<<endl;
cout<<"Program Menghitung diskon"<<endl;
cout<<"-------------------------"<<endl;

perhitungandiskon();

return 0;
}


