#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_CTYPE, "rus");
    int input;
    int month[31];
    int week[7] = { 0, 0, 0, 0, 0, 1, 1 }; //0 - рабочий день, 1 - выходной
    
    std::cout << "----------МАЙСКИЕ ПРАЗДНИКИ----------\n\n";
  
    int j = 0;
   for (int i = 0; i < 31; i++) //заполнение месяца без праздников
    {
        month[i] = week[j];
        j++;
        if (j == 7)
        {
            j = 0;
        }
        
    }

   month[0] = month[1] = month[2] = month[3] = month[4] = month[7] = month[8] = month[9] = 1;
                                //заполнение праздничных дней
   std::cout << "Введите сегодняшнее число: ";
   std::cin >> input;
   if (month[input - 1] == 0)
   {
       std::cout << "Сегодня рабочий день";
   }
   else
   {
       std::cout << "Сегодня выходной";
   }
}
