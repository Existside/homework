#include <iostream>
int main (){
setlocale (LC_ALL,"ru");
int usernumber;
std:: cout << "Проверка на чётность\n" << "Введите число: \n";
std:: cin >> usernumber; 

usernumber %= 2; //эта строка сильно упрощает задачу

if (usernumber == 1){
std:: cout << "Число нечётное\n";
}
else {
std:: cout << "Число чётное\n";
}

return 0;
}
