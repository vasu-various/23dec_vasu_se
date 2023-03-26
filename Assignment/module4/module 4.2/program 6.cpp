#include <iostream>
#include <string>
using namespace std;

// Base class: Cricketer
class Cricketer {
protected:
    string name;
    int age;

public:
    void inputData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }
};

// Derived class: Batsman
class Batsman : public Cricketer {
private:
    int totalRuns;
    double avgRuns;
    int bestPerformance;

public:
    void inputData() {
        Cricketer::inputData(); // Call base class function to input name and age
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        avgRuns = static_cast<double>(totalRuns) / 10; // Calculate average runs
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total runs: " << totalRuns << endl;
        cout << "Average runs: " << avgRuns << endl;
        cout << "Best performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman b;
    b.inputData();
    b.displayData();
    return 0;
}
