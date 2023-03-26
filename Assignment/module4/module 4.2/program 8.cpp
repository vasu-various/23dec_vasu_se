#include<iostream>
using namespace std;

class Student {
protected:
    int roll_number;
public:
    void set_roll_number(int rn) {
        roll_number = rn;
    }
};

class Test : public Student {
protected:
    int subject1_marks;
    int subject2_marks;
public:
    void set_marks(int m1, int m2) {
        subject1_marks = m1;
        subject2_marks = m2;
    }
};

class Result : public Test {
    int total_marks;
public:
    void display() {
        total_marks = subject1_marks + subject2_marks;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks in Subject 1: " << subject1_marks << endl;
        cout << "Marks in Subject 2: " << subject2_marks << endl;
        cout << "Total Marks: " << total_marks << endl;
    }
};

int main() {
    Result r;
    r.set_roll_number(101);
    r.set_marks(85, 92);
    r.display();
    return 0;
}
