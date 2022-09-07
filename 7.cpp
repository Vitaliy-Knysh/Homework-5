#include <iostream>
#include <clocale>


int sum;

int main()
{
	setlocale(LC_CTYPE, "rus");

	start:
	std::cout << "\nКакую сумму нужно снять?\n";
	std::cin >> sum;
	if (sum % 100 == 0 && sum <= 150000)
	{
		std::cout << "Банкомат выдал ";
		if (sum >= 5000)
		{
			std::cout << (sum / 5000) << " купюр по 5000 рублей\t";
			sum -= 5000 * (sum / 5000);
		}

		if (sum >= 2000)
		{
			std::cout << (sum / 2000) << " купюр по 2000 рублей\t";
			sum -= 2000 * (sum / 2000);
		}

		if (sum >= 1000)
		{
			std::cout << (sum / 1000) << " купюр по 1000 рублей\t";
			sum -= 1000 * (sum / 1000);
		}

		if (sum >= 500)
		{
			std::cout << (sum / 500) << " купюр по 500 рублей\t";
			sum -= 500 * (sum / 500);
		}

		if (sum >= 200)
		{
			std::cout << (sum / 200) << " купюр по 200 рублей\t";
			sum -= 200 * (sum / 200);
		}

		if (sum >= 100)
		{
			std::cout << (sum / 100) <<  " купюр по 100 рублей\t";
			sum -= 100 * (sum / 100);
		}

	}
	else
	{
		std::cout << "Сумму в " << sum << "рублей невозможно выдать\n" 
		<< "Чтобы ввести сумму ещё раз, нажмите 1\n" << "Чтобы выйти из программы, нажмите 2\n";
		std::cin >> sum;
		if (sum == 1)
		{
			goto start;
		}
	}

}
