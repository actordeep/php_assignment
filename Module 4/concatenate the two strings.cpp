#include <iostream>
#include <cstring>


class MyString {
private:
    char* str;

public:
   
    MyString(const char* s = "") {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }

    
    ~MyString() {
        delete[] str;
    }

    
    MyString operator+(const MyString& other) const {
        int newLength = std::strlen(str) + std::strlen(other.str) + 1;
        char* newStr = new char[newLength];
        std::strcpy(newStr, str);
        std::strcat(newStr, other.str);
        MyString result(newStr);
        delete[] newStr;
        return result;
    }

   
    void display() const {
        std::cout << str;
    }
};

int main() {
    
    MyString str1("Hello, ");
    MyString str2("world!");

    
    MyString result = str1 + str2;

   
    std::cout << "Concatenated String: ";
    result.display();
    std::cout << std::endl;

    return 0;
}
