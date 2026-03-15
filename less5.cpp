#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    cout << "введите букву: ";
    char word;  cin >> word;
    bool letter = islower (word);
    cout << (letter? "буква строчная" : "буква не строчная");
    
    return 0;
} 
