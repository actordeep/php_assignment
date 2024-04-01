#include <iostream>
#include <string>


class StudentInfo {
protected:
    std::string name;
    int rollNumber;

public:
    
    StudentInfo(const std::string& n, int roll) : name(n), rollNumber(roll) {}

    
    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};


class StudentMarks {
protected:
    double marks[5]; 

public:
    
    StudentMarks(const double* m) {
        for (int i = 0; i < 5; ++i) {
            marks[i] = m[i];
        }
    }


    void displayMarks() const {
        std::cout << "Marks:" << std::endl;
        for (int i = 0; i < 5; ++i) {
            std::cout << "Subject " << i + 1 << ": " << marks[i] << std::endl;
        }
    }
};


class MarkSheet : public StudentInfo, public StudentMarks {
public:
    
    MarkSheet(const std::string& n, int roll, const double* m)
        : StudentInfo(n, roll), StudentMarks(m) {}

   
    void displayMarkSheet() const {
        std::cout << "Mark Sheet:" << std::endl;
        displayInfo(); 
        displayMarks(); 
    }
};

int main() {
    
    std::string name = "John Doe";
    int rollNumber = 101;
    double marks[] = {85.5, 75.0, 92.0, 80.5, 88.0}; 

    
    MarkSheet studentMarkSheet(name, rollNumber, marks);

   
    studentMarkSheet.displayMarkSheet();

    return 0;
}
