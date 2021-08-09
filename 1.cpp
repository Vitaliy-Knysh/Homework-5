#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_CTYPE, "rus");
    int alc, med;
    
    std::cout << "----------ПРОВЕРКА СНАРЯЖЕНИЯ ФЕЛЬДШЕРА----------";

alc_check:
    std::cout << "\nСколько взято медицинского спирта? ";
    std::cin >> alc;
    if (alc < 2000)
    {
        std::cout << "\nЭтого мало! Возьмите минимум 2000 мл спирта!";
        goto alc_check;
    }

med_check:
    std::cout << "\nСколько взято аптечек? ";
    std::cin >> med;
    if (med < 5)
    {
        std::cout << "\nЭтого мало! Возьмите минимум 5 аптечек!";
        goto med_check;
    }
    std::cout << "\nПрипасов достаточно, можно выходить на работу";
}
