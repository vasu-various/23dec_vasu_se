#include <iostream>
#include <string>
using namespace std;

class ConcatenateStrings {
private:
    string str1, str2;

public:
    ConcatenateStrings() {}

    ConcatenateStrings(string s1, string s2) {
        str1 = s1;
        str2 = s2;
    }

    ConcatenateStrings operator+ (ConcatenateStrings& other) {
        ConcatenateStrings result;
        result.str1 = str1 + other.str1;
        result.str2 = str2 + other.str2;
        return result;
    }

    void display() {
        cout << "Concatenated string 1: " << str1 << endl;
        cout << "Concatenated string 2: " << str2 << endl;
    }
};

int main() {
    ConcatenateStrings obj1("Hello, ", "World!");
    ConcatenateStrings obj2("Welcome to ", "the chat!");

    ConcatenateStrings result = obj1 + obj2;

    result.display();

    return 0;
}
