#include <iostream>
#include <clocale>

int currentDay, currentMonth, currentYear; 
int birthDay, birthMonth, birthYear;  // дата в виде переменной
bool matureFlag = false;  // флаг поднимается если человеку есть 18

int main()
{
	setlocale(LC_CTYPE, "rus");

	std::cout << "Введите текущую дату. День: ";
	std::cin >> currentDay;
	std::cout << "\nМесяц: ";
	std::cin >> currentMonth;
	std::cout << "\nГод: ";
	std::cin >> currentYear;
	std::cout << "\n\nВведите дату рождения. День: ";
	std::cin >> birthDay;
	std::cout << "\nМесяц: ";
	std::cin >> birthMonth;
	std::cout << "\nГод: ";
	std::cin >> birthYear;

	if ((currentYear - birthYear) >= 19)
	{
		matureFlag = true;
	}
	else if ((currentYear - birthYear) == 18)
	{
		if (currentMonth > birthMonth)
		{
			matureFlag = true;
		}
		else if (currentMonth == birthMonth || currentDay > birthDay)
		{
			matureFlag = true;
		}
		else if (birthMonth == 2 || birthDay == 28 || currentMonth == 3 || currentDay == 1)
		{
			matureFlag = true;
		}
	}

	if (matureFlag == true)
	{
		std::cout << "\n\nВам можно покупать алкоголь!";
	}
	else
	{
		std::cout << "Вам нельзя покупать алкоголь";
	}

}
