#include <iostream>
#include <limits>
#include <ctime>
#include <unistd.h>
#include <random>

// using namespace std;
int main_Menu()
{
    std::cout << "Welcome to File(s) Or String(s) GENerator" << std::endl;
    std::cout << ' ' << std::endl;
    std::cout << "Please choose what you would like to do:" << std::endl;
    std::cout << ' ' << std::endl;
    std::cout << "1) Generate random string" << std::endl;
    std::cout << "2) Generate files" << std::endl;
    int choice1 {};
    std::cin >> choice1;

    return choice1;
}

int string_Menu()
{
    std::cout << "String(s) GENerator" << std::endl;
    std::cout << ' ' << std::endl;
    std::cout << "Please choose what charset to use:" << std::endl;
    std::cout << ' ' << std::endl;
    std::cout << "1) ASCII" << std::endl;
    std::cout << "2) UTF-8" << std::endl;
    int choice1 {};
    std::cin >> choice1;

    return choice1;
}

void wrong_Choice_2()
{
    std::cout << "That was wrong choice. Please enter 1 or 2 " << std::endl;
    std::cout << ' ' << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << ' ' << std::endl;
    std::cin.clear();
    std::cin.ignore( std::numeric_limits<std::streamsize>::max() , '\n' );
}

int main_menu_choice()
    {
       while (true)
       {
        int a {main_Menu()};

        if (a == 1 || a == 2)
            {
            std::cout << a << std::endl;
            return a;
            }
        else {
             wrong_Choice_2();
            // cin >> num;
            //goto begin1;
            }
        }
    }

int string_menu_choice()
    {
        while (true)
        {
        int a {string_Menu()};

        if (a == 1 || a == 2) {
            std::cout << a << std::endl;
            return a;
                }
        else {
             wrong_Choice_2();
            // cin >> num;
            //goto begin2;
                }
        }


    }
std::string random_string(int length)
{
    const std::string CHARACTERS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()";

    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);

    std::string random_string;

    // for (std::size_t i = 0; i < length; ++i)
    for (int i = 0; i < length; ++i)
    {
        random_string += CHARACTERS[distribution(generator)];
    }

    return random_string;
}

int main(int argc, char *argv[])
{
    // Plaseholder for command line arguments parsing
    //for (int i = 0; i < argc; ++i)
        //std::cout << argv[i] << "\n";


    int a {main_menu_choice()};
    //std::cout << "Main choice: " << a << std::endl;
    int b {};
    if (a == 1) {
        b = string_menu_choice();
    }

    if (a == 1 && b == 1) {
        //std::cout << "ASCII Rand gen" << std::endl;
        int len1 {1};

        while (len1 != 0) {
            std::cout << "Please enter length of string, enter 0 to quit" << '\n' ;
            std::cout << "Valid length between 1 and 4,000,000 characters:  " ;
            std::cin >> len1;
            if (len1 == 0) break;

            if (len1 >= 1 && len1 <= 4000000) {
                std::cout << random_string(len1) << std::endl;
                }
            else {
                std::cin.clear();
                std::cin.ignore( 100 , '\n' );
                len1 = 1;
                }
        }

    }



    // Random Strings generator
    //int num1{cons_input_int()};
    //std::cout << num1 << std::endl;
    // ASCII files generator
    // Binary files generator
    return 0;
}
