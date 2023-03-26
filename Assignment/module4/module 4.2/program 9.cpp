#include <iostream>
using namespace std;
int mathOperation(int num1, int num2) {
    return num1 + num2;
}
double mathOperation(double num1, double num2) {
    return num1 - num2;
}
int main() {
    int intResult;
    double doubleResult;
    intResult = mathOperation(10, 5);
    cout << "10 + 5 = " << intResult << endl;
    doubleResult = mathOperation(10.5, 5.5);
    cout << "10.5 - 5.5 = " << doubleResult << endl;

    return 0;
}


