// width2.cpp
// применение манипулятора setw
#include <iostream>
#include <iomanip> // для использования setw
using namespace std; 
int main()
{ 
int pop1 = 8425785, pop2 = 47, pop3 = 9761; 
cout  << setfill('.') << setw(10) << "Город" << setw(12)   << "Население" << endl
        << setw(10) << "Москва" << setw(12) << pop1 << endl
        << setw(10) << "Киров" << setw(12) << pop2 << endl
        << setw(10) << "Угрюмовка" << setw(12) << pop3 << endl; 
return 0;
}