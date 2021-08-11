#include <iostream>
#include <clocale>

bool check(int a, int b, int c, int wid, int len, int hgt) {
    if ((a <= wid && b <= len && c <= hgt) || (b <= wid && a <= len && c <= hgt) ||
        (a <= wid && c <= len && b <= hgt) || (c <= wid && a <= len && b <= hgt) ||
        (b <= wid && c <= len && c <= hgt) || (c <= wid && b <= len && a <= hgt))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    setlocale(LC_CTYPE, "rus");
    
    int A, B, C, M, N, K;
    std::cout << "----------ЗАДАЧА ПРО КОРОБКИ----------\n\n";
    std::cout << "Введите длину первой коробки: ";
    std::cin >> A;
    std::cout << "Введите ширину первой коробки: ";
    std::cin >> B;
    std::cout << "Введите высоту первой коробки: ";
    std::cin >> C;
    std::cout << "Введите длину второй коробки: ";
    std::cin >> M;
    std::cout << "Введите ширину второй коробки: ";
    std::cin >> N;
    std::cout << "Введите высоту второй коробки: ";
    std::cin >> K;
    
    if (check(A, B, C, M, N, K) == true || check(A, B, C, N, K, M) == true || check(A, B, C, K, M, N) == true)
    {
        std::cout << "\nКоробка поместилась!";
    }
    else
    {
        std::cout << "\nКоробка не поместилась!";
    }
}
