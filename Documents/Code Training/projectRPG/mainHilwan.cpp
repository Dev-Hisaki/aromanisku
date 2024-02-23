#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdio.h>
using namespace std;

struct
{
    string name; // Status pada setiap Object
    int hp;
    int mp;
    int p_attack;
    int m_attack;
} player, enemies; // Semua Object
class type
{
    public:
	string name; // Status pada setiap Object
    int hp;
    int mp;
    int p_attack;
    int m_attack;
    
    void printData(){
    	cout << "Name : "<< player.name << endl;
    	cout << "HP : "<< hp << endl;
    	cout << "MP : "<< mp << endl;
    	cout << p_attack << endl;
    	cout << m_attack << endl;
	}
};


// void intro()
// {

//     ifstream myfile;
//     char sv_text;

//     myfile.open("howtoplay.txt");

//     if (!myfile.fail())
//     {
//         while (!myfile.eof())
//         {
//             myfile.get(sv_text);
//             cout << sv_text;
//         }
//         myfile.close();
//     }
//     else
//     {
//         cout << "File tidak ditemukan" << endl;
//     }
// }

int playerType()
{ // Class dari tipe player
	type warrior;
	type archer;
	type mage;
	
	warrior.hp= 100;
	warrior.mp= 85;
	warrior.p_attack= 50;
	warrior.m_attack= 40;
	
	archer.hp= 90;
	archer.mp= 100;
	archer.p_attack= 60;
	archer.m_attack= 50;
	
	mage.hp= 95;
	mage.mp= 100;
	mage.p_attack= 70;
	mage.m_attack= 60;
	
	cout << "=======CHOOSE TYPE========" << endl;
	cout << "\n     1. warrior     "
         << "\n     2. archer      "
         << "\n     3. mage     "
         << endl;
	
	
}

int playerStatus()
{ // Status dari player
    player.hp = 100;
    player.mp = 150;
    player.p_attack = 20;
    player.m_attack = 10;

    cout << "==========STATUS==========" << endl; // Status player yang menyangkut nama, hp, dan mp
    cout << "Name : " << player.name << endl;
    cout << "HP   : " << player.hp << endl;
    cout << "MP   : " << player.mp << endl;
    cout << "==========================" << endl;
}

int actionMenu()
{ // Menu aksi
    cout << "Input your action";
    cout << "\n     1. Attack     "
         << "\n     2. Skill      "
         << "\n     3. Guard      "
         << "\n     4. Item       "
         << endl;
}

int attack()
{ // Pilihan penyerangan
    system("cls");
    player.hp--;
    cout << "==========STATUS==========" << endl; // Status player yang menyangkut nama, hp, dan mp
    cout << "Name : " << player.name << endl;
    cout << "HP   : " << player.hp << endl;
    cout << "MP   : " << player.mp << endl;
    cout << "==========================" << endl;
    cout << player.name << " hit the target" << endl;
}

int skill()
{ // Pilihan skill
    system("cls");
    cout << "==========STATUS==========" << endl; // Status player yang menyangkut nama, hp, dan mp
    cout << "Name : " << player.name << endl;
    cout << "HP   : " << player.hp << endl;
    cout << "MP   : " << player.mp << endl;
    cout << "==========================" << endl;
    cout << player.name << " use [skillName]" << endl;
}

int guard()
{
    system("cls");
    cout << "==========STATUS==========" << endl; // Status player yang menyangkut nama, hp, dan mp
    cout << "Name : " << player.name << endl;
    cout << "HP   : " << player.hp << endl;
    cout << "MP   : " << player.mp << endl;
    cout << "==========================" << endl;
    cout << player.name << " guard" << endl;
}

int item()
{
    system("cls");
    cout << "==========STATUS==========" << endl; // Status player yang menyangkut nama, hp, dan mp
    cout << "Name : " << player.name << endl;
    cout << "HP   : " << player.hp << endl;
    cout << "MP   : " << player.mp << endl;
    cout << "==========================" << endl;
    cout << player.name << " use [itemName]" << endl;
}

int main(int argc, char const *argv[])
{
    system("cls");
    // intro();

    cout << "\n\nInput your name : ";
    cin >> player.name;
    playerType();
    playerStatus();

    bool ulangMainMenu = true;
    while (ulangMainMenu == true)
    {
        system("cls");
        int action = 0;
		int type = 0;
		
    	cout << " Your Input : ";
    	cin >> type;
    	if(type == 1){
		cout <<  << endl ;
	}
	
    	
	    cout << "==========STATUS==========" << endl; // Status player yang menyangkut nama, hp, dan mp
        cout << "Name : " << player.name << endl;
        cout << "HP   : " << type << endl;
        cout << "MP   : " << type << endl;
        cout << "==========================" << endl;
        actionMenu();

        cout << "Your input : ";
        cin >> action;

        switch (action)
        {
        case 1:
            attack();
            getch();
            break;

        case 2:
            skill();
            getch();
            break;

        case 3:
            guard();
            getch();
            break;

        case 4:
            item();
            getch();
            break;

        default:
            break;
        }
    }

    return 0;
}
