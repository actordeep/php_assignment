#include <iostream>


class Matrix1D {
private:
    int size;
    int* data;

public:
    
    Matrix1D(int s) : size(s) {
        data = new int[size];
    }

   
    ~Matrix1D() {
        delete[] data;
    }

    
    Matrix1D operator+(const Matrix1D& other) const {
        if (size != other.size) {
            std::cerr << "Error: Matrix sizes are not compatible for addition." << std::endl;
            return *this;
        }

        Matrix1D result(size);
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    
    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            data[index] = value;
        } else {
            std::cerr << "Error: Index out of range." << std::endl;
        }
    }

    
    void display() const {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    
    Matrix1D matrix1(5);
    Matrix1D matrix2(5);

   
    for (int i = 0; i < 5; ++i) {
        matrix1.setValue(i, i + 1);
        matrix2.setValue(i, (i + 1) * 2);
    }

    
    std::cout << "Matrix 1: ";
    matrix1.display();
    std::cout << "Matrix 2: ";
    matrix2.display();

    
    Matrix1D result = matrix1 + matrix2;

    
    std::cout << "Result of Addition: ";
    result.display();

    return 0;
}
