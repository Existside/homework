#include <iostream>
using namespace std;
int main()
{ 
long int a;
long int b;
long int c;
cout << "калькулятор\n";
cout << "введите первое число\n";
cin >> a;

cout << "1 - сложить\n" << "2 - вычесть\n" << "3 - умножить\n" << "4 - разделить\n";
int sellector;
cin >> sellector;

cout << "на\n";
cin >> b;

if (sellector == 0){
return 0;
};
if (sellector == 1){
c = a + b;
};
if (sellector == 2){
c = a - b;
};
if (sellector == 3){
c = a * b;
};
if (sellector == 4){
c = a / b;
};

cout << "вывод " << c; 
return 0;
}