#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    int choice;
    char again;

    do
    {
        cout << "\n=====================================\n";
        cout << "        SIMPLE CALCULATOR\n";
        cout << "=====================================\n";

        cout << "Enter First Number: ";
        cin >> num1;

        cout << "Enter Second Number: ";
        cin >> num2;

        cout << "\nChoose an Operation:\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nResult = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "\nResult = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "\nResult = " << num1 * num2 << endl;
                break;

            case 4:
                if(num2 != 0)
                    cout << "\nResult = " << num1 / num2 << endl;
                else
                    cout << "\nError! Division by zero is not allowed." << endl;
                break;

            default:
                cout << "\nInvalid Choice!" << endl;
        }

        cout << "\nDo you want to perform another calculation? (Y/N): ";
        cin >> again;

    } while(again == 'Y' || again == 'y');

    cout << "\nThank you for using the Simple Calculator!\n";

    return 0;
}
