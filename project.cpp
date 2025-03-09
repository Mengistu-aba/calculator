#include <iostream>
using namespace std;

int main()
{
        double num1, num2;
        char operation;

        cout << "Simple Calculator" << endl;
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> num2;

        switch (operation)
        {
        case '+':
                cout << "The sum is = : " << num1 + num2 << endl;
                break;
        case '-':
                cout << "the difference is =: " << num1 - num2 << endl;
                break;
        case '*':
                cout << "Result when " << num1 << " is multiplied by " << num2 << "is = : " << num1 * num2 << endl;
                break;
        case '/':
                if (num2 != 0)
                {
                        cout << "Result when " << num1 << "divided by" << num2 << "is = : " << num1 / num2 << endl;
                }
                else
                {
                        cout << "Error: Division by zero is not allowed!" << endl;
                }
                break;
        default:
                cout << "Error: Invalid operator!" << endl;
        }

        return 0;
}
