#include <iostream>
#include <string>

class Address
{
private:
    std::string street;
    std::string city;
    std::string state;
    std::string zipCode;

public:
    Address(const std::string &s, const std::string &c, const std::string &st, const std::string &z)
        : street(s), city(c), state(st), zipCode(z) {}

    void display() const
    {
        std::cout << "Address: " << street << ", " << city << ", " << state << " - " << zipCode << std::endl;
    }
};

class Student
{
private:
    std::string name;
    std::string className;
    int rollNumber;
    double marks;
    Address address;

public:
    Student(const std::string &n, const std::string &cls, int roll, double m, const Address &addr)
        : name(n), className(cls), rollNumber(roll), marks(m), address(addr) {}

    // Function to calculate grade based on marks
    char calculateGrade() const
    {
        if (marks >= 90)
        {
            return 'A';
        }
        else if (marks >= 80)
        {
            return 'B';
        }
        else if (marks >= 70)
        {
            return 'C';
        }
        else if (marks >= 60)
        {
            return 'D';
        }
        else
        {
            return 'F';
        }
    }

    void display() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << className << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
        address.display();
    }
};

int main()
{

    Address addr1("123 Main St", "CityA", "StateA", "12345");
    Address addr2("456 Elm St", "CityB", "StateB", "67890");

    Student student1("John Doe", "10th", 101, 85.5, addr1);
    Student student2("Jane Smith", "12th", 201, 92.0, addr2);

    std::cout << "Student 1 Information:" << std::endl;
    student1.display();
    std::cout << "\nStudent 2 Information:" << std::endl;
    student2.display();

    return 0;
}
