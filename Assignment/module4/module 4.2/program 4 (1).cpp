#include <iostream>
using namespace std;

class Calculator {
   private:
    double operand1, operand2;

   public:
    Calculator(double op1, double op2) {
        operand1 = op1;
        operand2 = op2;
    }

    double add() {
        return operand1 + operand2;
    }

    double subtract() {
        return operand1 - operand2;
    }

    double multiply() {
        return operand1 * operand2;
    }

    double divide() {
        if (operand2 != 0) {
            return operand1 / operand2;
        } else {
            cout << "Error: division by zero" << endl;
            return 0;
        }
    }
};

int main() {
    double op1, op2;
    cout << "Enter operand 1: ";
    cin >> op1;
    cout << "Enter operand 2: ";
    cin >> op2;

    Calculator myCalculator(op1, op2);

    cout << "Addition: " << myCalculator.add() << endl;
    cout << "Subtraction: " << myCalculator.subtract() << endl;
    cout << "Multiplication: " << myCalculator.multiply() << endl;
    cout << "Division: " << myCalculator.divide() << endl;

    return 0;
}
