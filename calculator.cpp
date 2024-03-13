#include <iostream>
using namespace std;

int calculate(double num1, char op, double num2) {
    double result;
    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '/') {
        result = num1 / num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else {
        cout << "Invalid operator used: Please provide a valid operator";
    }
    cout << "Answer = " << result;
    return 0;
}

int main () {
    double num1;
    double num2;
    char op;

    cin >> num1;
    cin >> op;
    cin >> num2;
    calculate(num1, op, num2);
    return 0;
}