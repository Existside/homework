#include <iostream>
using namespace std;
int main()
{
    cout << "Введите число кубических футов: ";
    float foot;
    cin >> foot;
    const float gallonfoot= 7.481;
    float gallon = foot * gallonfoot;
    cout << "Число галлонов равно: " << gallon << endl;
    return 0;
}
