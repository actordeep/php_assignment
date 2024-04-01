#include <iostream>
#include <string>

class Student
{
protected:
    int rollNumber;

public:
    Student(int roll) : rollNumber(roll) {}

    void displayStudent() const
    {
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

class Test : public Student
{
protected:
    double marks1;
    double marks2;

public:
    Test(int roll, double m1, double m2) : Student(roll), marks1(m1), marks2(m2) {}

    void displayTestMarks() const
    {
        std::cout << "Marks in Subject 1: " << marks1 << std::endl;
        std::cout << "Marks in Subject 2: " << marks2 << std::endl;
    }
};

class Result : public Test
{
private:
    double totalMarks;

public:
    Result(int roll, double m1, double m2) : Test(roll, m1, m2)
    {
        totalMarks = marks1 + marks2;
    }

    void displayResult() const
    {
        displayStudent();
        displayTestMarks();
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main()
{

    int rollNumber = 101;
    double marks1 = 85.5;
    double marks2 = 78.0;

    Result studentResult(rollNumber, marks1, marks2);

    std::cout << "Student Test Result:" << std::endl;
    studentResult.displayResult();

    return 0;
}
