-- create a table
-- Create Student table
CREATE TABLE Student (
    StudentID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Age INT,
    Gender VARCHAR(10),
    GradeLevel INT
);

-- Create Exam table
CREATE TABLE Exam (
    ExamID INT PRIMARY KEY,
    StudentID INT,
    ExamDate DATE,
    Subject VARCHAR(50),
    Score INT,
    FOREIGN KEY (StudentID) REFERENCES Student(StudentID)
);
