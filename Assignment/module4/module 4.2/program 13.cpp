#include <iostream>
using namespace std;

class Swap {
private:
    int num1, num2;
public:
    Swap(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
    friend void swapNumbers(Swap &s);
};
void swapNumbers(Swap &s) {
    s.num1 = s.num1 + s.num2;
    s.num2 = s.num1 - s.num2;
    s.num1 = s.num1 - s.num2;
}

int main() {
    int n1, n2;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    Swap s(n1, n2);

    cout << "Before swapping, n1 = " << s.num1 << " and n2 = " << s.num2 << endl;

    swapNumbers(s);

    cout << "After swapping, n1 = " << s.num1 << " and n2 = " << s.num2 << endl;

    return 0;
}
