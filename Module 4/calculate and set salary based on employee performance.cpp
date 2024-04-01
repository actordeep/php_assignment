#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    
    Employee(const std::string& empName, int empID, double empSalary) : name(empName), employeeID(empID), salary(empSalary) {}

    
    void setSalary(double performance) {
        
        if (performance >= 0 && performance <= 1) {
            salary *= (1 + performance);
            std::cout << "Salary set based on performance. New salary: " << salary << std::endl;
        } else {
            std::cerr << "Error: Invalid performance value!" << std::endl;
        }
    }

   
    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
   
    Employee emp("John Doe", 123456, 50000.0);

    
    std::cout << "Initial Employee Details:" << std::endl;
    emp.display();

    
    emp.setSalary(0.1);

   
    std::cout << "\nUpdated Employee Details:" << std::endl;
    emp.display();

    return 0;
}
