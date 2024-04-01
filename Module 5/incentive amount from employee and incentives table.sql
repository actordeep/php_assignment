
CREATE TABLE Employee (
    EmployeeID INT PRIMARY KEY,
    First_Name VARCHAR(50),
    Last_Name VARCHAR(50),
    Department VARCHAR(50),
    Salary DECIMAL(10, 2)
);


CREATE TABLE Incentives (
    IncentiveID INT PRIMARY KEY,
    EmployeeID INT,
    IncentiveAmount DECIMAL(10, 2),
    IncentiveDate DATE,
    FOREIGN KEY (EmployeeID) REFERENCES Employee(EmployeeID)
);


INSERT INTO Employee (EmployeeID, First_Name, Last_Name, Department, Salary)
VALUES 
    (1, 'John', 'Doe', 'Sales', 50000.00),
    (2, 'Alice', 'Smith', 'Marketing', 60000.00),
    (3, 'Bob', 'Johnson', 'Finance', 70000.00);


INSERT INTO Incentives (IncentiveID, EmployeeID, IncentiveAmount, IncentiveDate)
VALUES 
    (101, 1, 4000.00, '2022-01-15'),
    (102, 2, 2500.00, '2022-02-20'),
    (103, 3, 5000.00, '2022-03-25');


SELECT e.First_Name, i.IncentiveAmount
FROM Employee e
JOIN Incentives i ON e.EmployeeID = i.EmployeeID
WHERE i.IncentiveAmount > 3000;
