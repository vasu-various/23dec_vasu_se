#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
protected:
    float percentage;

public:
    void readData() {
        Person::readData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayData() {
        Person::displayData();
        cout << "Percentage: " << percentage << endl;
    }
};
class Teacher : public Person {
protected:
    float salary;

public:
    void readData() {
        Person::readData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() {
        Person::displayData();
        cout << "Salary: " << salary << endl;
    }
};
class StudentTeacher : public Student, public Teacher {
public:
    void readData() {
        Student::readData();
        Teacher::readData();
    }

    void displayData() {
        Student::displayData();
        Teacher::displayData();
    }
};

// Main function
int main() {
    StudentTeacher st;
    st.readData();
    st.displayData();
    return 0;
}
