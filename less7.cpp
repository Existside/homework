#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    cout << "введите температуру по Цельсию: ";
    float ctemp; cin >> ctemp;
    float ftemp = ctemp * 9 / 5 + 32; 
    cout << "температура по Фаренгейту: " << ftemp << endl;
    return 0;
}
