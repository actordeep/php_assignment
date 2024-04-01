-- Create the item_mast table
CREATE TABLE item_mast (
    PRO_ID INT PRIMARY KEY,
    PRO_NAME VARCHAR(50),
    PRO_PRICE DECIMAL(10, 2),
    PRO_COM INT
);

-- Insert sample data into the item_mast table
INSERT INTO item_mast (PRO_ID, PRO_NAME, PRO_PRICE, PRO_COM)
VALUES 
    (101, 'Mother Board', 3200.00, 15),
    (102, 'Key Board', 450.00, 16),
    (103, 'ZIP drive', 250.00, 14),
    (104, 'Speaker', 550.00, 16),
    (105, 'Monitor', 5000.00, 11),
    (106, 'DVD drive', 900.00, 12),
    (107, 'CD drive', 800.00, 12),
    (108, 'Printer', 2600.00, 13),
    (109, 'Refill cartridge', 350.00, 13),
    (110, 'Mouse', 250.00, 12);

-- Display the pro_name as 'Item Name' and pro_price as 'Price in Rs.'
SELECT 
    PRO_NAME AS 'Item Name', 
    CONCAT('Rs. ', PRO_PRICE) AS 'Price in Rs.'
FROM 
    item_mast;
