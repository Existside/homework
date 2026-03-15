#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float funt, Oshill, Opens, Npens;
    //int Zfunt = 156;
    //char asciiChar = static_cast<char>(Zfunt);
    cout << "введите количество фунтов: ";
    cin >> funt;
    cout << "введите количество шиллингов: ";
    cin >> Oshill;
    cout <<"введите количество пенсов: ";
    cin >> Opens;

    Npens = (funt + (((Oshill * 12 + Opens)/2.4) / 100));

    cout << "десятичных фунтов: " << "£  " << Npens;
    return 0;
}
