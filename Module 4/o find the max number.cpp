#include <iostream>

class Number
{
private:
    int num;

public:
    Number(int n) : num(n) {}

    friend int findMax(const Number &, const Number &);
};

int findMax(const Number &num1, const Number &num2)
{
    return (num1.num > num2.num) ? num1.num : num2.num;
}

int main()
{
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    Number number1(num1);
    Number number2(num2);

    int maxNumber = findMax(number1, number2);
    std::cout << "Maximum number: " << maxNumber << std::endl;

    return 0;
}
