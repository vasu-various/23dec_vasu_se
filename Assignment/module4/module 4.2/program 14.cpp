#include <iostream>
using namespace std;

class MaxFinder {
private:
    int a, b;

public:
    MaxFinder(int x, int y) {
        a = x;
        b = y;
    }

    friend int findMax(MaxFinder obj);
};

int findMax(MaxFinder obj) {
    if (obj.a > obj.b) {
        return obj.a;
    } else {
        return obj.b;
    }
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    MaxFinder obj(x, y);
    int maxNum = findMax(obj);

    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}
