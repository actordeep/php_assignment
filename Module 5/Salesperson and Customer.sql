-- Create Salesperson table
CREATE TABLE Salesperson (
    SalespersonID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Email VARCHAR(100),
    Phone VARCHAR(20)
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

-- Insert sample data into the Salesperson table
INSERT INTO Salesperson (SalespersonID, FirstName, LastName, Email, Phone)
VALUES 
    (1, 'John', 'Doe', 'john.doe@example.com', '123-456-7890'),
    (2, 'Alice', 'Smith', 'alice.smith@example.com', '987-654-3210');

-- Insert sample data into the Customer table
INSERT INTO Customer (CustomerID, FirstName, LastName, Email, Phone, Address)
VALUES 
    (1, 'Michael', 'Johnson', 'michael.johnson@example.com', '111-222-3333', '123 Main St, CityA'),
    (2, 'Emily', 'Brown', 'emily.brown@example.com', '444-555-6666', '456 Elm St, CityB');

