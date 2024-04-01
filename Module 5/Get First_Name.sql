-- Create Employee table
CREATE TABLE Employee (
    EmployeeID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Department VARCHAR(50),
    Salary DECIMAL(10, 2)
);

-- Create IncentiveTable table
CREATE TABLE IncentiveTable (
    IncentiveID INT PRIMARY KEY,
    EmployeeID INT,
    IncentiveAmount DECIMAL(10, 2),
    IncentiveDate DATE,
    FOREIGN KEY (EmployeeID) REFERENCES Employee(EmployeeID)
);

-- Inserting sample data into the Employee table
INSERT INTO Employee (EmployeeID, FirstName, LastName, Department, Salary)
VALUES (1, 'Tom', 'Smith', 'Sales', 50000.00);

INSERT INTO Employee (EmployeeID, FirstName, LastName, Department, Salary)
VALUES (2, 'Alice', 'Johnson', 'Marketing', 60000.00);

INSERT INTO Employee (EmployeeID, FirstName, LastName, Department, Salary)
VALUES (3, 'Bob', 'Williams', 'Finance', 70000.00);

-- Query to retrieve First_Name of employees with the first name "Tom"
SELECT FirstName
FROM Employee
WHERE FirstName = 'Tom';
