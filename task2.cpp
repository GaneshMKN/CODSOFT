#include <iostream>
using namespace std;
int main()
{
    float x = 0, y = 0, result = 0;
    char operation, continue_ = 'n';
    cout << "Please enter first number :  ";
    cin >> x;
    cout << "Please enter second number :  ";
    cin >> y;
    cout << "Please enter operator symbol !.\n";
    cout << "+ : Addition\n- : Subtraction\n* : Multiplication\n/ : Division\nYour selection   :   ";
    cin >> operation;
    switch (operation)
    {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        if (y==0)
        {
            cout << "\n\tdivison by zero is undefined. Program terminated!\n";
            continue_ = 1;
            break;
        }
        else
        {
        result = x / y;
        break;
        }
    default:
        cout << "\n\tIncorrect input entered. Program terminated!";
        continue_ = 1;
        break;
    }
    cout << x << " " << operation << " " << y << " " << " = " << result;
}