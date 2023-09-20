# include <iostream>
using namespace std;

int main() {

    char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, /: \n";
    cin >> op;

    cout << "Enter first operand:  ";
    cin >> num1;
    cout << "Enter second operand:  ";
    cin>> num2;

    switch (op) {

    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        if (num2 == 0)
            cout << "Math Error\n";
        break;
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    default:
        // If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not correct";
        break;
    }

    return 0;
}