#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T arr[], int size) {
    for (int i = 1; i < size; i++) {
        T key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {5, 2, 9, 1, 5, 6};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    cout << "Original integer array:" << endl;
    printArray(intArray, intSize);
    insertionSort(intArray, intSize);
    cout << "Sorted integer array:" << endl;
    printArray(intArray, intSize);
    
    double doubleArray[] = {3.14, 1.618, 2.718, 0.577, 1.414};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    cout << "Original double array:" << endl;
    printArray(doubleArray, doubleSize);
    insertionSort(doubleArray, doubleSize);
    cout << "Sorted double array:" << endl;
    printArray(doubleArray, doubleSize);
    
    return 0;
}
