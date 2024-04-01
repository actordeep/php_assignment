-- Create Customer table
CREATE TABLE Customer (
    CustomerID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Email VARCHAR(100),
    Phone VARCHAR(20),
    Address VARCHAR(255),
    Rating INT
);

-- Insert sample data into the Customer table
INSERT INTO Customer (CustomerID, FirstName, LastName, Email, Phone, Address, Rating)
VALUES 
    (1, 'Michael', 'Johnson', 'michael.johnson@example.com', '111-222-3333', '123 Main St, CityA', 150),
    (2, 'Emily', 'Brown', 'emily.brown@example.com', '444-555-6666', '456 Elm St, CityB', 90),
    (3, 'David', 'Smith', 'david.smith@example.com', '777-888-9999', '789 Oak St, Rome', 120),
    (4, 'Sarah', 'Wilson', 'sarah.wilson@example.com', '888-999-0000', '101 Pine St, London', 80);

-- Retrieve all customers excluding those with rating <= 100 unless they are located in Rome
SELECT *
FROM Customer
WHERE Rating > 100 OR Address LIKE '%Rome%';
