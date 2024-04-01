-- Create Employee table
CREATE TABLE Employee (
    EmployeeID INT PRIMARY KEY,
    First_Name VARCHAR(50),
    Last_Name VARCHAR(50),
    Department VARCHAR(50),
    Salary DECIMAL(10, 2)
);

-- Create ViewTable (This is just a placeholder for the example)
CREATE TABLE ViewTable (
    EmployeeID INT PRIMARY KEY,
    First_Name VARCHAR(50),
    Last_Name VARCHAR(50),
    Department VARCHAR(50),
    Salary DECIMAL(10, 2)
);

-- Create the after insert trigger
CREATE TRIGGER AfterEmployeeInsert
AFTER INSERT
ON Employee
FOR EACH ROW
BEGIN
    INSERT INTO ViewTable (EmployeeID, First_Name, Last_Name, Department, Salary)
    VALUES (NEW.EmployeeID, NEW.First_Name, NEW.Last_Name, NEW.Department, NEW.Salary);
END;
