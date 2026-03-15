#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    cout << setiosflags(ios::left) << setw(14) << "Фамилия" << setw (16) << "Имя" << setw (18) << "Адрес" << setw (18) << "Город" << endl
    << setw (66) << setfill('-') << endl
    << setw(14) << "Петров" << setw (16) << "Василий" << setw (18) << "Кленовая 16" << setw (18) << "Санкт-Петербург" << endl
    << setw(14) << "Иванов" << setw (16) << "Сергей" << setw (18) << "Осиповая 3" << setw (18) << "Находка" << endl
    << setw(14) << "Сидоров" << setw (16) << "Иван" << setw (18) << "Берёзовая 21" << setw (18) << "Калининград" << endl ;

    return 0;
}