#include <iostream>

class Base
{
private:
    int privateMemberBase;

protected:
    int protectedMemberBase;

public:
    int publicMemberBase;

    Base(int privateVal, int protectedVal, int publicVal) : privateMemberBase(privateVal), protectedMemberBase(protectedVal), publicMemberBase(publicVal) {}

    void display()
    {

        std::cout << "Private Member in Base: " << privateMemberBase << std::endl;

        std::cout << "Protected Member in Base: " << protectedMemberBase << std::endl;

        std::cout << "Public Member in Base: " << publicMemberBase << std::endl;
    }
};


class Derived : public Base
{
public:
    
    Derived(int privateVal, int protectedVal, int publicVal) : Base(privateVal, protectedVal, publicVal) {}

    
    void displayDerived()
    {
        
        std::cout << "Protected Member in Derived: " << protectedMemberBase << std::endl;
        
        std::cout << "Public Member in Derived: " << publicMemberBase << std::endl;
    }
};

int main()
{
    
    Derived obj(10, 20, 30);

    
    std::cout << "Accessing through Base class object:" << std::endl;
    obj.Base::display();

    std::cout << "\nAccessing through Derived class object:" << std::endl;
    obj.displayDerived();

    return 0;
}
