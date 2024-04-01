-- Create Employee table
CREATE TABLE Employee (
    EmployeeID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Department VARCHAR(50),
    Salary DECIMAL(10, 2),
    JoiningDate DATE
);

-- Insert sample data into the Employee table
INSERT INTO Employee (EmployeeID, FirstName, LastName, Department, Salary, JoiningDate)
VALUES 
    (1, 'John', 'Doe', 'Sales', 50000.00, '2022-01-15'),
    (2, 'Alice', 'Smith', 'Marketing', 60000.00, '2022-02-20'),
    (3, 'Bob', 'Johnson', 'Finance', 70000.00, '2022-03-25');

-- Retrieve all employee details from the Employee table ordered by First_Name Ascending and Salary Descending
SELECT *
FROM Employee
ORDER BY FirstName ASC, Salary DESC;
