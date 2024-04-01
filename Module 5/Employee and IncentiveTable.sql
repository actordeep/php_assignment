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
