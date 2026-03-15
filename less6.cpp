#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{
    cout << "введите сумму в долларах: ";
    double doll;  cin >> doll; 
    double funt = doll / 1.487, frank = doll / 0.172F, mark = doll / 0.584F, yna =  doll / 0.00955F;
    
    cout << "эквивалент: \n" 
    << "в фунтах:  " << fixed << setprecision(2) << (funt) << endl
    << "в франках: " << fixed << setprecision(2) << (frank) << endl
    << "в марках:  " << fixed << setprecision(2) << (mark) << endl
    << "в йенах:   " << fixed << setprecision(2) << (yna) << endl;
    return (0);
}                                