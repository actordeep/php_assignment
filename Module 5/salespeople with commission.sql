-- Create Salesperson table
CREATE TABLE Salesperson (
    SalespersonID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Email VARCHAR(100),
    Phone VARCHAR(20),
    City VARCHAR(50),
    Commission DECIMAL(5, 2)
);

-- Create Customer table
CREATE TABLE Customer (
    CustomerID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Email VARCHAR(100),
    Phone VARCHAR(20),
    Address VARCHAR(255)
);

-- Create Orders table
CREATE TABLE Orders (
    OrderID INT PRIMARY KEY,
    CustomerID INT,
    OrderDate DATE,
    Amount DECIMAL(10, 2),
    FOREIGN KEY (CustomerID) REFERENCES Customer(CustomerID)
);

-- Insert sample data into the Salesperson table
INSERT INTO Salesperson (SalespersonID, FirstName, LastName, Email, Phone, City, Commission)
VALUES 
    (1, 'John', 'Doe', 'john.doe@example.com', '123-456-7890', 'London', 0.15),
    (2, 'Alice', 'Smith', 'alice.smith@example.com', '987-654-3210', 'Manchester', 0.10),
    (3, 'Michael', 'Johnson', 'michael.johnson@example.com', '111-222-3333', 'London', 0.14),
    (4, 'Emily', 'Taylor', 'emily.taylor@example.com', '444-555-6666', 'Barcelona', 0.11),
    (5, 'James', 'Wilson', 'james.wilson@example.com', '555-666-7777', 'London', 0.13);

-- Insert sample data into the Customer table
INSERT INTO Customer (CustomerID, FirstName, LastName, Email, Phone, Address)
VALUES 
    (1, 'Michael', 'Johnson', 'michael.johnson@example.com', '111-222-3333', '123 Main St, CityA'),
    (2, 'Emily', 'Brown', 'emily.brown@example.com', '444-555-6666', '456 Elm St, CityB');

-- Insert sample data into the Orders table
INSERT INTO Orders (OrderID, CustomerID, OrderDate, Amount)
VALUES 
    (1, 1, '2022-01-01', 1200.00),
    (2, 2, '2022-01-02', 800.00),
    (3, 1, '2022-01-03', 1500.00),
    (4, 2, '2022-01-04', 950.00);


-- Retrieve all salespeople with commission between 0.10 and 0.12 (excluding boundary values)
SELECT *
FROM Salesperson
WHERE Commission > 0.10 AND Commission < 0.12;
