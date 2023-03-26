#include <iostream>
#include <cmath>

using namespace std;
float area(float radius) {
    return M_PI * radius * radius;
}

float area(float length, float width) {
    return length * width;
}

float area(float base, float height, float dummy) {
    return 0.5 * base * height;
}

int main() {
    float radius, length, width, base, height;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle is: " << area(radius) << endl;
    
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    cout << "Area of rectangle is: " << area(length, width) << endl;
   
    cout << "Enter base of triangle: ";
    cin >> base;
    cout << "Enter height of triangle: ";
    cin >> height;
    cout << "Area of triangle is: " << area(base, height, 0) << endl;
    
    return 0;
}
