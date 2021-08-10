#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_CTYPE, "rus");
    
    int input;
    std::cout << "----------СКЛОНЕНИЕ СЛОВА----------\n";
    std::cout << "Товар стоит ";
    std::cin >> input;
    input %= 100;
    
    if ((input % 10 == 0) || (input % 10 == 5) || (input % 10 == 6) || (input % 10 == 7) || (input % 10 == 8) || (input % 10 == 9) || (input > 9 && input < 21))
    {
        std::cout << "рублей";
    }
    else if (input % 10 == 1)
    {
        std::cout << "рубль";
    }
    else
    {
        std::cout << "рубля";
    }
}
