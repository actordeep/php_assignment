#include <iostream>

class Base
{
protected:
    int baseValue;

public:
    Base()
    {
        baseValue = 0;
        std::cout << "Base class default constructor called." << std::endl;
    }

    Base(int val) : baseValue(val)
    {
        std::cout << "Base class parameterized constructor called with value: " << baseValue << std::endl;
    }
};

class Derived : public Base
{
protected:
    int derivedValue;

public:
    Derived()
    {
        derivedValue = 0;
        std::cout << "Derived class default constructor called." << std::endl;
    }

    Derived(int baseVal, int derivedVal) : Base(baseVal), derivedValue(derivedVal)
    {
        std::cout << "Derived class parameterized constructor called with values: " << baseValue << " " << derivedValue << std::endl;
    }
};

class FurtherDerived : public Derived
{
public:
    FurtherDerived()
    {
        std::cout << "FurtherDerived class default constructor called." << std::endl;
    }

    FurtherDerived(int baseVal, int derivedVal) : Derived(baseVal, derivedVal)
    {
        std::cout << "FurtherDerived class parameterized constructor called with values: " << baseValue << " " << derivedValue << std::endl;
    }
};

int main()
{

    std::cout << "Creating objects:" << std::endl;
    FurtherDerived obj1;
    std::cout << std::endl;
    FurtherDerived obj2(10, 20);

    return 0;
}