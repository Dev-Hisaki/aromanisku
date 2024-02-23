#include <iostream>
#include <string>

void bruteForce(std::string passwordToHack)
{
    std::string result, attempResult;
    int characterIndex = 0;
    while (result != passwordToHack)
    {
        for (int i = 0; i < 128; i++)
        {
            char character = i;
            attempResult.push_back(character);
            std::cout << "ATTEMP : " << attempResult << std::endl;
            system("cls");
            // printf("ATTEMP : %s\n", attempResult.c_str());
            if (character == passwordToHack.at(characterIndex))
            {
                result = result + character;
                attempResult = result;
                break;
            }
            else
            {
                attempResult.pop_back();
            }
        }
        characterIndex++;
    }

    if (result == passwordToHack)
    {
        std::cout << std::endl;
        std::cout << "PASSWORD HAS BEEN HACKED" << std::endl;
    }

    std::cout << "Your Password is :" << result << std::endl;
}

int main(int argc, char const *argv[])
{
    std::string password = "THESKUTLIVING";
    bruteForce(password);
    return 0;
}
