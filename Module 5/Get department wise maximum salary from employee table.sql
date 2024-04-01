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
    (3, 'Bob', 'Johnson', 'Finance', 70000.00, '2022-03-25'),
    (4, 'Emily', 'Brown', 'Sales', 55000.00, '2022-04-10'),
    (5, 'Michael', 'Clark', 'Finance', 72000.00, '2022-05-15'),
    (6, 'Sarah', 'Wilson', 'Marketing', 65000.00, '2022-06-20');

-- Retrieve department-wise maximum salary from the Employee table and order by salary ascending
SELECT Department, MAX(Salary) AS MaxSalary
FROM Employee
GROUP BY Department
ORDER BY MaxSalary ASC;
