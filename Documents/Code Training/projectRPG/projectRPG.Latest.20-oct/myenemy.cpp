#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct
{
    string name; // Status pada setiap Object
    int hp;
    int mp;
    int p_attack;
    int m_attack;
} player, enemies; // Semua Object

int playerStatus()
{ // Status dari player
    player.name = "me";
    player.hp = 100;
    player.mp = 150;

    cout << "==========STATUS==========" << endl; // Status player yang menyangkut nama, hp, dan mp
    cout << "Name : " << player.name << endl;
    cout << "HP : " << player.hp << endl;
    cout << "MP : " << player.mp << endl;
    cout << "==========================" << endl;
}

int enemiesStatus()
{ // Status dari enemies
    enemies.name = "Enemy";
    enemies.hp = 100;
    enemies.mp = 150;
    enemies.p_attack = 15;
    enemies.m_attack = 25;
    cout << "==========STATUS==========" << endl; // Status enemies yang menyangkut nama, hp, dan mp
    cout << "Name : " << enemies.name << endl;
    cout << "HP : " << enemies.hp << endl;
    cout << "MP : " << enemies.mp << endl;
    cout << "==========================" << endl;
}

int actionMenu()
{ // Menu aksi
    cout << "Input your action";
    cout << "\n     1. Attack     "
         << "\n     2. Skill      "
         << endl;
}

int attack()
{ // Pilihan penyerangan
    int att;
    int att_hp2;
    system("cls");
    player.hp = player.hp - 30;
    att_hp2 = player.hp;
    cout << player.name << " hit the target!!!" << endl;
    cout << " hit damage = " << 30 << endl;
    cout << " Your hp = " << player.hp << endl;
}
int skil, attt, mp2;
int skill()
{ // Pilihan skill
    cout << enemies.name << " use [skillName]" << endl;
    while (true)
    {
        system("cls");
        cout << "1. Pysic" << endl;
        cout << "2. Magic" << endl;
        cout << " Skill = ";
        cin >> skil;

        if (skil == 1)
        {
            enemies.p_attack = 15;
            player.hp = player.hp - enemies.p_attack;
            cout << player.name << " hit the target!!!" << endl;
            cout << " hit damage = " << enemies.p_attack << endl;
            cout << " Your hp = " << player.hp << endl;
            cout << "==========================" << endl;
            cout << " use magic = " << 0 << endl;
            cout << " Your mp = " << player.mp << endl;
            break;
        }
        else if (skil == 2)
        {
            enemies.m_attack = 25;
            player.hp = player.hp - enemies.m_attack;
            player.mp = player.mp - 30;
            cout << player.name << " hit the target!!!" << endl;
            cout << " hit damage = " << enemies.m_attack << endl;
            cout << " Your hp = " << player.hp << endl;
            cout << "==========================" << endl;
            cout << " use magic = " << 30 << endl;
            cout << " Your mp = " << player.mp << endl;
            break;
        }
        else
        {
            cout << "owww";
        }
    }
}

int main(int argc, char const *argv[])
{
    system("cls");
    playerStatus();
    bool ulangMainMenu = true;
    while (ulangMainMenu == true)
    {
        system("cls");
        int action = 0;

        cout << "==========STATUS==========" << endl; // Status player yang menyangkut nama, hp, dan mp
        cout << "Name : " << player.name << endl;
        cout << "HP : " << player.hp << endl;
        cout << "MP : " << player.mp << endl;
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

        default:
            break;
        }
    }

    return 0;
}
