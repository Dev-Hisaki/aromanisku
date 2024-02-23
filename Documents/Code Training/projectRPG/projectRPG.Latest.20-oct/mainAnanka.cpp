#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdio.h>
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

void intro()
{

    ifstream myfile;
    char sv_text;

    myfile.open("howtoplay.txt");

    if (!myfile.fail())
    {
        while (!myfile.eof())
        {
            myfile.get(sv_text);
            cout << sv_text;
        }
        myfile.close();
    }
    else
    {
        cout << "File tidak ditemukan" << endl;
    }
}

int warrior()
{
    player.hp = 200;
    player.mp = 70;
    player.p_attack = 20;
    player.m_attack = 5;
}

int archer()
{
    player.hp = 100;
    player.mp = 150;
    player.p_attack = 15;
    player.m_attack = 15;
}

int mage()
{
    player.hp = 100;
    player.mp = 200;
    player.p_attack = 5;
    player.m_attack = 20;
}

int enemyStatus()
{
    enemies.name = "BOSS";
    enemies.hp = 200;
    enemies.mp = 150;
    enemies.p_attack = 20;
    enemies.m_attack = 10;
}

int enemyattack()
{
    system("cls");
    int randAtt = rand() % 2 + 1;
    int damagePhy = rand() % (enemies.p_attack + 1 - 10) + 10;
    int damageMag = rand() % (enemies.m_attack + 1 - 5) + 5;

    if (randAtt == 1)
    {
        cout << "Enemy use bash" << endl;
        cout << player.name << " taken " << damagePhy << endl;
        player.hp -= damagePhy;
    }
    else if (randAtt == 2)
    {
        cout << "Enemy use ice shot" << endl;
        cout << player.name << " taken " << damageMag << endl;
        player.hp -= damageMag;
    }
}

int actionMenu()
{ // Menu aksi
    cout << "Input your action";
    cout << "\n     1. Attack     "
         << "\n     2. Skill      "
         << "\n     3. Guard      "
         << "\n     4. Run        "
         << endl;
}

int attack()
{ // Pilihan penyerangan
    system("cls");
    int damage = rand() % player.p_attack;
    cout << player.name << " dealt " << damage << " damage" << endl;
    enemies.hp -= damage;
}

int skil, attt, mp2;
int skill()
{ // Pilihan skill
    cout << enemies.name << " use [skillName]" << endl;
    while (true)
    {
        system("cls");
        cout << "1. Slash       10 hp" << endl;
        cout << "2. Fireball    15 mp" << endl;
        cout << "3. Heal         5 mp" << endl;
        cout << "Skill = ";
        cin >> skil;

        if (skil == 1)
        {
            int damage = rand() % (player.p_attack + 1 - (player.p_attack - 10)) + (player.p_attack - 10);

            enemies.hp -= damage;
            cout << player.name << " dealt " << damage << endl;
            break;
        }
        else if (skil == 2)
        {
            int damage = rand() % (player.m_attack + 1 - (player.m_attack - 10)) + (player.m_attack - 10);

            enemies.hp -= damage;
            cout << player.name << " dealt " << damage << endl;
            player.mp -= 15;
            break;
        }
        else if (skil == 3)
        {
            player.hp = player.hp + 10;
            cout << player.name << " use heal" << endl;
            cout << "Recover " << 20 << " HP" << endl;
            break;
        }
        else
        {
            cout << "owww";
        }
    }
}

int guard()
{
    system("cls");
    int randBlo = rand() % 3 + 1;
    int damagePhy = rand() % (enemies.p_attack + 1 - 10) + 10;
    int damageMag = rand() % (enemies.m_attack + 1 - 5) + 5;
    int randManaRe = rand() % (player.mp + 1 - 5) + 5;
    cout << player.name << " tried to block" << endl;
    if (randBlo == 1)
    {
        damagePhy = damagePhy - 0;
        player.mp = player.mp + 10;
        cout << "Your block suck dick!!!" << endl;
        cout << player.name << " taken " << damagePhy << endl;
        cout << player.name << " taken restored some mana" << endl;
        player.hp -= damagePhy;
    }
    else if (randBlo == 2)
    {
        damagePhy = damagePhy - 10;
        player.mp = player.mp + 10;
        cout << "You kinda block it, but your asian parent would'nt say the same" << endl;
        cout << "you blocked 10 damage from enemies" << endl;
        cout << player.name << " taken " << damagePhy << endl;
        cout << player.name << " taken restored some mana" << endl;
        player.hp -= damagePhy;
    }
        else if (randBlo == 3)
    {
        damagePhy = damagePhy - 20;
        player.mp = player.mp + 10;
        cout << "You successfuly block" << endl;
        cout << "you blocked 20 damage from enemies" << endl;
        cout << player.name << " taken " << damagePhy << endl;
        cout << player.name << " taken restored some mana" << endl;
        player.hp -= damagePhy;
    }
}

int main(int argc, char const *argv[])
{
    srand(time(0));
    system("cls");
    system("color b");
    int role;
    intro();

    cout << "\n\nInput your name : ";
    cin >> player.name;

    system("cls");
    cout << "Select your role " << endl;
    cout << "1. Warrior : Strong in physical attack, more hp" << endl;
    cout << "2. Archer  : Balanced in any stat" << endl;
    cout << "3. Mage    : Strong in magic attack, more mp" << endl;
    cout << "===============================================" << endl;
    cout << "Your input : ";
    cin >> role;

    switch (role)
    {
    case 1:
        warrior();
        break;

    case 2:
        archer();
        break;

    case 3:
        mage();
        break;

    default:
        break;
    }
    enemyStatus();


    bool ulangMainMenu = true;
    while (ulangMainMenu == true)
    {
        system("cls");
        if (player.hp > 0)
        {
            int action = 0;

            cout << "=======ENEMY STATUS=======" << endl; // Status enemy yang menyangkut nama, hp, dan mp
            cout << "Name : " << enemies.name << endl;
            cout << "HP   : " << enemies.hp << endl;
            cout << "MP   : " << enemies.mp << endl;
            cout << "==========================\n"
                 << endl;
            cout << "==========STATUS==========" << endl; // Status player yang menyangkut nama, hp, dan mp
            cout << "Name : " << player.name << endl;
            cout << "HP   : " << player.hp << endl;
            cout << "MP   : " << player.mp << endl;
            cout << "==========================" << endl;
            actionMenu();

            cout << "Your input : ";
            cin >> action;

            switch (action)
            {
            case 1:
                attack();
                getch();
                enemyattack();
                getch();
                break;

            case 2:
                skill();
                getch();
                enemyattack();
                getch();
                break;

            case 3:
                guard();
                getch();
                break;

            case 4:
                ulangMainMenu = false;
                break;
            default:
                break;
            }
        }
        else
        {
            system("cls");
            system("color 4");
            cout << "You died" << endl;
            ulangMainMenu = false;
        }
    }
    return 0;
}
