//это моё решение этой задачи

#include <iostream>
int main (){
setlocale (LC_ALL,"ru");
int usernumber;
std:: cout << "Проверка на чётность\n" << "Введите число: \n";
std:: cin >> usernumber; 

while (usernumber  > 1 || usernumber < 0){
if (usernumber < 0){
    usernumber = usernumber + 2;
};
if (usernumber > 1){
    usernumber = usernumber - 2;
};


};
if (usernumber == 1){
std:: cout << "Число нечётное\n";
};
if (usernumber == 0){
std:: cout << "Число чётное\n";
};

return 0;
}

