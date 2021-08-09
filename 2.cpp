#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_CTYPE, "rus");
    int alt, spd;
    
    std::cout << "----------ПРОВЕРКА ЭШЕЛОНА САМОЛЁТА----------";

alt_check:
    std::cout << "\nНа какой высоте находится самолёт? ";
    std::cin >> alt;
    if (alt < 9000 || alt > 9500)
    {
        std::cout << "\nНеправильная высота! Диапазон высоты - от 9000 до 9500 м!";
        goto alt_check;
    }

spd_check:
    std::cout << "\nНа какой скорости летит самолет? ";
    std::cin >> spd;
    if (spd < 750 || spd > 850)
    {
        std::cout << "\nНеправильная скорость! Диапазон скорости - от 750 до 850 км/ч!";
        goto spd_check;
    }
    std::cout << "\nСамолёт летит в правильном эшелоне";
}
