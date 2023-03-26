#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapValues(x, y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
