#include <iostream>
using namespace std; 

int main()
{
    setlocale(LC_ALL, "RU");

    float num1, num2, result;
    cout << "Введите первое число: "; 
    cin >> num1;

    cout << "Введите второе число: "; 
    cin >> num2;

    char math;
    cout << "Введите действие: [+] [-] [*] [/] "; 
    cin >> math;

    if (math == '+')
        result = num1 + num2;
    else if (math == '-')
        result = num1 - num2;
    else if (math == '*')
        result = num1 * num2;
    else if (math == '/')
        result = num1 / num2;

    cout << "Ответ: " << result; 
}

