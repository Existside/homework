#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, d, e, f;
    char dummychar = '/';
    cout << "введите первую дробь: ";
    cin >> a >> dummychar >> b;
    cout << "введите вторую дробь: ";
    cin >> c >> dummychar >> d;
    e = (a*d + b*c);
    f = (b*d);
    float answer = (a*d + b*c)/(b*d);
    cout <<"ответ: " << answer << endl
    << e << "/" << f;

    return 0;
}