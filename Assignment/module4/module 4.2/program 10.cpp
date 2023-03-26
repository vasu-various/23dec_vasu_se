#include <iostream>

using namespace std;

class Matrix {
  private:
    int* data;
    int size;

  public:
    Matrix(int s) {
      size = s;
      data = new int[size];
    }

    Matrix(const Matrix& m) {
      size = m.size;
      data = new int[size];
      for (int i = 0; i < size; i++) {
        data[i] = m.data[i];
      }
    }

    ~Matrix() {
      delete[] data;
    }

    Matrix operator+(const Matrix& m) {
      Matrix result(size);
      for (int i = 0; i < size; i++) {
        result.data[i] = data[i] + m.data[i];
      }
      return result;
    }

    void input() {
      for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> data[i];
      }
    }

    void display() {
      for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
      }
      cout << endl;
    }
};

int main() {
  int size;
  cout << "Enter size of matrix: ";
  cin >> size;

  Matrix A(size);
  cout << "Enter elements of matrix A:\n";
  A.input();

  Matrix B(size);
  cout << "Enter elements of matrix B:\n";
  B.input();

  Matrix C = A + B;
  cout << "Resultant matrix C:\n";
  C.display();

  return 0;
}
