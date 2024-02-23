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

void win()
{
    ifstream myfile;
    char sv_text;

    myfile.open("won.txt");

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

void lose()
{
    ifstream myfile;
    char sv_text;

    myfile.open("lose.txt");

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
    player.m_attack = 30;
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

int roleSelectionMenu()
{
roleAction:
    int role;
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
        cout << "Please choose a number between 1-3" << endl;
        getch();
        goto roleAction;
        break;
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

int skill()
{ // Pilihan skill
    int skil;
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

            if (damage < 0)
            {
                damage = 0;
            }
            enemies.hp -= damage;
            player.mp -= 10;
            cout << player.name << " dealt " << damage << endl;
            break;
        }
        else if (skil == 2)
        {
            int damage = rand() % (player.m_attack + 1 - (player.m_attack - 10)) + (player.m_attack - 10);

            if (damage < 0)
            {
                damage = 0;
            }
            enemies.hp -= damage;
            player.mp -= 20;
            cout << player.name << " dealt " << damage << endl;
            player.mp -= 15;
            break;
        }
        else if (skil == 3)
        {
            int maxHP = player.hp;
            int healAmount = rand() % maxHP;

            player.hp = player.hp + healAmount;
            player.mp -= 5;
            cout << player.name << " use heal" << endl;
            cout << "Recover " << healAmount << " HP" << endl;
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
        cout << "Your guard is not effective" << endl;
        getch();
        cout << player.name << " taken " << damagePhy << endl;
        cout << player.name << " recover some mana" << endl;
        player.hp -= damagePhy;
    }
    else if (randBlo == 2)
    {
        damagePhy = damagePhy - 10;
        player.mp = player.mp + 10;
        cout << "You reduce the incoming damage" << endl;
        getch();
        cout << player.name << " taken " << damagePhy << endl;
        cout << player.name << " recover some mana" << endl;
        player.hp -= damagePhy;
    }
    else if (randBlo == 3)
    {
        damagePhy = damagePhy - 20;
        player.mp = player.mp + 10;
        cout << "You successfuly block" << endl;
        getch();
        cout << player.name << " taken " << damagePhy << endl;
        cout << player.name << " recover some mana" << endl;
        player.hp -= damagePhy;
    }
}

int main(int argc, char const *argv[])
{
    srand(time(0));
    system("cls");
    system("color b");
    intro();

    cout << "\n\nInput your name : ";
    cin >> player.name;

    roleSelectionMenu();

    enemyStatus();
    int maxHP = player.hp;

    bool ulangMainMenu = true;
    while (ulangMainMenu == true)
    {
        if (enemies.hp > 0)
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
                    if (player.hp > maxHP)
                    {
                        player.hp = maxHP;
                    }
                    getch();
                    enemyattack();
                    getch();
                    break;

                case 3:
                    guard();
                    getch();
                    break;

                case 4:
                    system("cls");
                    cout << player.name << " flee" << endl;
                    getch();
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
                lose();
                ulangMainMenu = false;
                getch();
            }
        }
        else
        {
            system("cls");
            system("color a");
            win();
            ulangMainMenu = false;
            getch();
        }
    }
    return 0;
}