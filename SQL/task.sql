\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
-- page number 20 full create table and insert data and slw tha query 
-- 31 page only create table and insert data only 
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

create database shop;

create table CLIENT_MASTER(
    CLIENTNO VARCHAR(6),
    NAME VARCHAR(20),
    ADDRESS1 VARCHAR(30),
    ADDRESS2 VARCHAR(30),
    CITY VARCHAR(15),
    PINCODE INT,
    State VARCHAR(15),
    BALDUE DECIMAL(10,2)
);

INSERT INTO CLIENT_MASTER VALUES
('C00001', 'Ivan Bayross', 'Mumbai', 'Mumbai', 'Mumbai', 400054, 'Maharashtra', 15000),
('C00002', 'Mamta Murudkar', 'Madras', 'Madras', 'Madras', 780001, 'Tamil Nadu', 0),
('C00003', 'Chhaya Banker', 'Bangalore', 'Bangalore', 'Bangalore', 560001, 'Karnataka', 5000),
('C00004', 'Ashwini Joshi', 'Bangalore', 'Bangalore', 'Bangalore', 560001, 'Karnataka', 0),
('C00005', 'Hansel Colaco', 'Mumbai', 'Mumbai', 'Mumbai', 400060, 'Maharashtra', 2000),
('C00006', 'Deepak Sharma', 'Mumbai', 'Mumbai', 'Mumbai', 400050, 'Maharashtra', 0);

-- mysql> SELECT * FROM CLIENT_MASTER;
-- +----------+----------------+-----------+-----------+-----------+---------+-------------+----------+
-- | CLIENTNO | NAME           | ADDRESS1  | ADDRESS2  | CITY      | PINCODE | State       | BALDUE   |
-- +----------+----------------+-----------+-----------+-----------+---------+-------------+----------+
-- | C00001   | Ivan Bayross   | Mumbai    | Mumbai    | Mumbai    |  400054 | Maharashtra | 15000.00 |
-- | C00002   | Mamta Murudkar | Madras    | Madras    | Madras    |  780001 | Tamil Nadu  |     0.00 |
-- | C00003   | Chhaya Banker  | Bangalore | Bangalore | Bangalore |  560001 | Karnataka   |  5000.00 |
-- | C00004   | Ashwini Joshi  | Bangalore | Bangalore | Bangalore |  560001 | Karnataka   |     0.00 |
-- | C00005   | Hansel Colaco  | Mumbai    | Mumbai    | Mumbai    |  400060 | Maharashtra |  2000.00 |
-- | C00006   | Deepak Sharma  | Mumbai    | Mumbai    | Mumbai    |  400050 | Maharashtra |     0.00 |
-- +----------+----------------+-----------+-----------+-----------+---------+-------------+----------+
-- 6 rows in set (0.011 sec)

CREATE TABLE PRODUCT_MASTER
(
    PRODUCTNO VARCHAR(6),
    DESCRIPTION VARCHAR(15),
    PROFITPERCENT DECIMAL(4,2),
    UNITMEASURE VARCHAR(10),
    QTYONHAND INT,
    REORDERLVL INT,
    SELLPRICE DECIMAL(8,2),
    COSTPRICE DECIMAL(8,2)
);

INSERT INTO PRODUCT_MASTER VALUES
('P00001', 'T-Shirts', 5, 'Piece', 200, 50, 350, 250),
('P0345', 'Shirts', 5, 'Piece', 150, 50, 500, 350),
('P06734', 'Cotton Jeans', 5, 'Piece', 100, 20, 600, 450),
('P07865', 'Jeans', 5, 'Piece', 100, 20, 750, 500),
('P07868', 'Trousers', 5, 'Piece', 150, 40, 850, 550),
('P07885', 'Pull Overs', 2.5, 'Piece', 80, 30, 700, 450),
('P07965', 'Denim Shirts', 4, 'Piece', 100, 40, 350, 250),
('P07975', 'Lycra Tops', 5, 'Piece', 70, 30, 300, 175),
('P08865', 'Skirts', 5, 'Piece', 75, 30, 450, 300);

-- mysql> SELECT * FROM PRODUCT_MASTER;
-- +-----------+--------------+---------------+-------------+-----------+------------+-----------+-----------+
-- | PRODUCTNO | DESCRIPTION  | PROFITPERCENT | UNITMEASURE | QTYONHAND | REORDERLVL | SELLPRICE | COSTPRICE |
-- +-----------+--------------+---------------+-------------+-----------+------------+-----------+-----------+
-- | P00001    | T-Shirts     |          5.00 | Piece       |       200 |         50 |    350.00 |    250.00 |
-- | P0345     | Shirts       |          5.00 | Piece       |       150 |         50 |    500.00 |    350.00 |
-- | P06734    | Cotton Jeans |          5.00 | Piece       |       100 |         20 |    600.00 |    450.00 |
-- | P07865    | Jeans        |          5.00 | Piece       |       100 |         20 |    750.00 |    500.00 |
-- | P07868    | Trousers     |          5.00 | Piece       |       150 |         40 |    850.00 |    550.00 |
-- | P07885    | Pull Overs   |          2.50 | Piece       |        80 |         30 |    700.00 |    450.00 |
-- | P07965    | Denim Shirts |          4.00 | Piece       |       100 |         40 |    350.00 |    250.00 |
-- | P07975    | Lycra Tops   |          5.00 | Piece       |        70 |         30 |    300.00 |    175.00 |
-- | P08865    | Skirts       |          5.00 | Piece       |        75 |         30 |    450.00 |    300.00 |
-- +-----------+--------------+---------------+-------------+-----------+------------+-----------+-----------+
-- 9 rows in set (0.005 sec)

CREATE TABLE SALESMAN_MASTER
(
    SALESMANNO VARCHAR(6),
    SALESMANNAME VARCHAR(20),
    ADDRESS1 VARCHAR(30),
    ADDRESS2 VARCHAR(30),
    CITY VARCHAR(20),
    PINCODE INT,
    STATE VARCHAR(20),
    SALAMT DECIMAL(8,2),
    TGTTOGET DECIMAL(6,2),
    YTDSALES DECIMAL(6,2),
    REMARKS VARCHAR(60)
);

INSERT INTO SALESMAN_MASTER VALUES
('S00001', 'Aaman', 'A/1', 'Worli', 'Mumbai', 400002, 'Maharashtra', 3000, 100, 50, 'Good'),
('S00002', 'Omkar', '6/1', 'Worli', 'Mumbai', 400001, 'Maharashtra', 3000, 200, 100, 'Good'),
('S00003', 'Raj', 'P-7', 'Bandra', 'Mumbai', 400032, 'Maharashtra', 3000, 200, 100, 'Good'),
('S00004', 'Ashish', 'A/5', 'Juhu', 'Mumbai', 400044, 'Maharashtra', 3500, 200, 150, 'Good');

-- mysql> SELECT * FROM SALESMAN_MASTER;
-- +------------+--------------+----------+----------+--------+---------+-------------+---------+----------+----------+---------+
-- | SALESMANNO | SALESMANNAME | ADDRESS1 | ADDRESS2 | CITY   | PINCODE | STATE       | SALAMT  | TGTTOGET | YTDSALES | REMARKS |
-- +------------+--------------+----------+----------+--------+---------+-------------+---------+----------+----------+---------+
-- | S00001     | Aaman        | A/1      | Worli    | Mumbai |  400002 | Maharashtra | 3000.00 |   100.00 |    50.00 | Good    |
-- | S00002     | Omkar        | 6/1      | Worli    | Mumbai |  400001 | Maharashtra | 3000.00 |   200.00 |   100.00 | Good    |
-- | S00003     | Raj          | P-7      | Bandra   | Mumbai |  400032 | Maharashtra | 3000.00 |   200.00 |   100.00 | Good    |
-- | S00004     | Ashish       | A/5      | Juhu     | Mumbai |  400044 | Maharashtra | 3500.00 |   200.00 |   150.00 | Good    |
-- +------------+--------------+----------+----------+--------+---------+-------------+---------+----------+----------+---------+
-- 4 rows in set (0.011 sec)

======================================================================================================================================================
QUE 3 A 

SELECT NAME FROM CLIENT_MASTER;
+----------------+
| NAME           |
+----------------+
| Ivan Bayross   |
| Mamta Murudkar |
| Chhaya Banker  |
| Ashwini Joshi  |
| Hansel Colaco  |
| Deepak Sharma  |
+----------------+
6 rows in set (0.011 sec)

QUE 3 B SELECT * FROM CLIENT_MASTER;

+----------+----------------+-----------+-----------+-----------+---------+-------------+----------+
| CLIENTNO | NAME           | ADDRESS1  | ADDRESS2  | CITY      | PINCODE | State       | BALDUE   |
+----------+----------------+-----------+-----------+-----------+---------+-------------+----------+
| C00001   | Ivan Bayross   | Mumbai    | Mumbai    | Mumbai    |  400054 | Maharashtra | 15000.00 |
| C00002   | Mamta Murudkar | Madras    | Madras    | Madras    |  780001 | Tamil Nadu  |     0.00 |
| C00003   | Chhaya Banker  | Bangalore | Bangalore | Bangalore |  560001 | Karnataka   |  5000.00 |
| C00004   | Ashwini Joshi  | Bangalore | Bangalore | Bangalore |  560001 | Karnataka   |     0.00 |
| C00005   | Hansel Colaco  | Mumbai    | Mumbai    | Mumbai    |  400060 | Maharashtra |  2000.00 |
| C00006   | Deepak Sharma  | Mumbai    | Mumbai    | Mumbai    |  400050 | Maharashtra |     0.00 |
+----------+----------------+-----------+-----------+-----------+---------+-------------+----------+
6 rows in set (0.011 sec)

QUE 3 C  SELECT * FROM CLIENT_MASTER;

+----------------+-----------+-------------+
| NAME           | CITY      | STATE       |
+----------------+-----------+-------------+
| Ivan Bayross   | Mumbai    | Maharashtra |
| Mamta Murudkar | Madras    | Tamil Nadu  |
| Chhaya Banker  | Bangalore | Karnataka   |
| Ashwini Joshi  | Bangalore | Karnataka   |
| Hansel Colaco  | Mumbai    | Maharashtra |
| Deepak Sharma  | Mumbai    | Maharashtra |
+----------------+-----------+-------------+

QUE 3 D

 SELECT DESCRIPTION FROM PRODUCT_MASTER;
+--------------+
| DESCRIPTION  |
+--------------+
| T-Shirts     |
| Shirts       |
| Cotton Jeans |
| Jeans        |
| Trousers     |
| Pull Overs   |
| Denim Shirts |
| Lycra Tops   |
| Skirts       |
+--------------+
9 rows in set (0.011 sec)

QUE 3 E
SELECT NAME,CITY FROM CLIENT_MASTER WHERE CITY = 'MUMBAI';
+---------------+--------+
| NAME          | CITY   |
+---------------+--------+
| Ivan Bayross  | Mumbai |
| Hansel Colaco | Mumbai |
| Deepak Sharma | Mumbai |
+---------------+--------+
3 rows in set (0.010 sec)


QUE 3 F 
 SELECT SALESMANNAME,SALAMT FROM SALESMAN_MASTER WHERE SALAMT ='3000.00';
+--------------+---------+
| SALESMANNAME | SALAMT  |
+--------------+---------+
| Aaman        | 3000.00 |
| Omkar        | 3000.00 |
| Raj          | 3000.00 |
+--------------+---------+
3 rows in set (0.012 sec)
=================================================================================================================================================================

QUE 4 a
UPDATE CLIENT_MASTER SET CITY = 'BANGALORE' WHERE CLIENTNO = 'C00005';

SELECT CITY FROM CLIENT_MASTER WHERE  CLIENTNO = 'C00005';
+-----------+
| CITY      |
+-----------+
| BANGALORE |
+-----------+
1 row in set (0.011 sec)

QUE 4 B

UPDATE CLIENT_MASTER SET BALDUE = '1000' WHERE CLIENTNO = 'C00001';

 SELECT BALDUE FROM CLIENT_MASTER WHERE  CLIENTNO = 'C00001';
+---------+
| BALDUE  |
+---------+
| 1000.00 |
+---------+
1 row in set (0.009 sec)

QUE 4 C

UPDATE PRODUCT_MASTER SET COSTPRICE='950.00' WHERE DESCRIPTION = 'Trousers';

SELECT COSTPRICE,DESCRIPTION FROM PRODUCT_MASTER WHERE DESCRIPTION = 'Trousers';
+-----------+-------------+
| COSTPRICE | DESCRIPTION |
+-----------+-------------+
|    950.00 | Trousers    |
+-----------+-------------+
1 row in set (0.368 sec)

QUE 4 D

UPDATE SALESMAN_MASTER SET CITY ='PUNE';

 SELECT CITY FROM SALESMAN_MASTER;
+------+
| CITY |
+------+
| PUNE |
| PUNE |
| PUNE |
| PUNE |
+------+
4 rows in set (0.006 sec)

==============================================================================================================================================

QUE 5 a

DELETE FROM SALESMAN_MASTER WHERE SALAMT ='3500.00';

SELECT * FROM SALESMAN_MASTER WHERE SALAMT ='3500.00';
Empty set (0.125 sec)

QUE 5 B 

DELETE FROM PRODUCT_MASTER WHERE QTYONHAND ='100';

SELECT * FROM PRODUCT_MASTER;
+-----------+-------------+---------------+-------------+-----------+------------+-----------+-----------+
| PRODUCTNO | DESCRIPTION | PROFITPERCENT | UNITMEASURE | QTYONHAND | REORDERLVL | SELLPRICE | COSTPRICE |
+-----------+-------------+---------------+-------------+-----------+------------+-----------+-----------+
| P00001    | T-Shirts    |          5.00 | Piece       |       200 |         50 |    350.00 |    250.00 |
| P0345     | Shirts      |          5.00 | Piece       |       150 |         50 |    500.00 |    350.00 |
| P07868    | Trousers    |          5.00 | Piece       |       150 |         40 |    850.00 |    950.00 |
| P07885    | Pull Overs  |          2.50 | Piece       |        80 |         30 |    700.00 |    450.00 |
| P07975    | Lycra Tops  |          5.00 | Piece       |        70 |         30 |    300.00 |    175.00 |
| P08865    | Skirts      |          5.00 | Piece       |        75 |         30 |    450.00 |    300.00 |
+-----------+-------------+---------------+-------------+-----------+------------+-----------+-----------+
6 rows in set (0.110 sec)

QUE 5 c

DELETE FROM CLIENT_MASTER WHERE STATE ='TAMIL NADU';

 SELECT * FROM CLIENT_MASTER ;
+----------+---------------+-----------+-----------+-----------+---------+-------------+---------+
| CLIENTNO | NAME          | ADDRESS1  | ADDRESS2  | CITY      | PINCODE | State       | BALDUE  |
+----------+---------------+-----------+-----------+-----------+---------+-------------+---------+
| C00001   | Ivan Bayross  | Mumbai    | Mumbai    | Mumbai    |  400054 | Maharashtra | 1000.00 |
| C00003   | Chhaya Banker | Bangalore | Bangalore | Bangalore |  560001 | Karnataka   | 5000.00 |
| C00004   | Ashwini Joshi | Bangalore | Bangalore | Bangalore |  560001 | Karnataka   |    0.00 |
| C00005   | Hansel Colaco | Mumbai    | Mumbai    | BANGALORE |  400060 | Maharashtra | 2000.00 |
| C00006   | Deepak Sharma | Mumbai    | Mumbai    | Mumbai    |  400050 | Maharashtra |    0.00 |
+----------+---------------+-----------+-----------+-----------+---------+-------------+---------+
5 rows in set (0.009 sec)

==============================================================================================================================================

QUE 6 A

ALTER TABLE CLIENT_MASTER 
ADD COLUMN TELEPHONE INT;

DESC CLIENT_MASTER;
+-----------+---------------+------+-----+---------+-------+
| Field     | Type          | Null | Key | Default | Extra |
+-----------+---------------+------+-----+---------+-------+
| CLIENTNO  | varchar(6)    | YES  |     | NULL    |       |
| NAME      | varchar(20)   | YES  |     | NULL    |       |
| ADDRESS1  | varchar(30)   | YES  |     | NULL    |       |
| ADDRESS2  | varchar(30)   | YES  |     | NULL    |       |
| CITY      | varchar(15)   | YES  |     | NULL    |       |
| PINCODE   | int           | YES  |     | NULL    |       |
| State     | varchar(15)   | YES  |     | NULL    |       |
| BALDUE    | decimal(10,2) | YES  |     | NULL    |       |
| TELEPHONE | int           | YES  |     | NULL    |       |
+-----------+---------------+------+-----+---------+-------+

QUE 6 B

ALTER TABLE PRODUCT_MASTER
MODIFY COLUMN SELLPRICE  DECIMAL(10,2);

DESC PRODUCT_MASTER;
+---------------+---------------+------+-----+---------+-------+
| Field         | Type          | Null | Key | Default | Extra |
+---------------+---------------+------+-----+---------+-------+
| PRODUCTNO     | varchar(6)    | YES  |     | NULL    |       |
| DESCRIPTION   | varchar(15)   | YES  |     | NULL    |       |
| PROFITPERCENT | decimal(4,2)  | YES  |     | NULL    |       |
| UNITMEASURE   | varchar(10)   | YES  |     | NULL    |       |
| QTYONHAND     | int           | YES  |     | NULL    |       |
| REORDERLVL    | int           | YES  |     | NULL    |       |
| SELLPRICE     | decimal(10,2) | YES  |     | NULL    |       |
| COSTPRICE     | decimal(8,2)  | YES  |     | NULL    |       |
+---------------+---------------+------+-----+---------+-------+


==========================================================================================================================================

QUE 7 A 

DROP TABLE CLIENT_MASTER;
Query OK, 0 rows affected (0.227 sec)

-- SELECT * FROM CLIENT_MASTER;
-- ERROR 1146 (42S02): Table 'shop.client_master' doesn't exist 

==========================================================================================================================================

QUE 8 A

ALTER TABLE SALESMAN_MASTER
RENAME  SMAN_MAST;

RENAME TABLE SALESMAN_MASTER TO SMAN_MAST;

-- SELECT * FROM SALESMAN_MASTER;
-- ERROR 1146 (42S02): Table 'shop.salesman_master' doesn't exist

SELECT * FROM SMAN_MAST;
+------------+--------------+----------+----------+------+---------+-------------+---------+----------+----------+---------+
| SALESMANNO | SALESMANNAME | ADDRESS1 | ADDRESS2 | CITY | PINCODE | STATE       | SALAMT  | TGTTOGET | YTDSALES | REMARKS |
+------------+--------------+----------+----------+------+---------+-------------+---------+----------+----------+---------+
| S00001     | Aaman        | A/1      | Worli    | PUNE |  400002 | Maharashtra | 3000.00 |   100.00 |    50.00 | Good    |
| S00002     | Omkar        | 6/1      | Worli    | PUNE |  400001 | Maharashtra | 3000.00 |   200.00 |   100.00 | Good    |
| S00003     | Raj          | P-7      | Bandra   | PUNE |  400032 | Maharashtra | 3000.00 |   200.00 |   100.00 | Good    |
+------------+--------------+----------+----------+------+---------+-------------+---------+----------+----------+---------+

==========================================================================================================================================

-- PAGE 31 CREATE TABLE AND INSERT DATA 

CREATE DATABASE SELES;

-- 1. Create Tables
----------------------------------------

-- CLIENT_MASTER Table
CREATE TABLE CLIENT_MASTER (
    CLIENTNO VARCHAR(6) PRIMARY KEY,
    ADDRESS2 VARCHAR(30),
    CITY VARCHAR(15),
    PINCODE INT,
    STATE VARCHAR(15),
    BALDUE DECIMAL(10,2)
);

-- PRODUCT_MASTER Table
CREATE TABLE PRODUCT_MASTER (
    PRODUCTNO VARCHAR(6) PRIMARY KEY CHECK (PRODUCTNO LIKE 'P%'),
    DESCRIPTION VARCHAR(15) NOT NULL,
    PROFITPERCENT DECIMAL(4,2) NOT NULL,
    UNITMEASURE VARCHAR(10) NOT NULL,
    QTYONHAND INT NOT NULL,
    REORDERLVL INT NOT NULL,
    SELLPRICE DECIMAL(8,2) NOT NULL CHECK (SELLPRICE != 0),
    COSTPRICE DECIMAL(8,2) NOT NULL CHECK (COSTPRICE != 0)
);

-- SALESMAN_MASTER Table
CREATE TABLE SALESMAN_MASTER (
    SALESMANNO VARCHAR(6) PRIMARY KEY CHECK (SALESMANNO LIKE 'S%'),
    SALESMANNAME VARCHAR(20) NOT NULL,
    ADDRESS1 VARCHAR(30) NOT NULL,
    ADDRESS2 VARCHAR(30),
    CITY VARCHAR(20),
    PINCODE INT,
    STATE VARCHAR(20),
    SALAMT DECIMAL(8,2) NOT NULL CHECK (SALAMT != 0),
    TGTTOGET DECIMAL(6,2) NOT NULL CHECK (TGTTOGET != 0),
    YTDSALES DECIMAL(6,2) NOT NULL,
    REMARKS VARCHAR(60)
);

-- SALES_ORDER Table
CREATE TABLE SALES_ORDER (
    ORDERNO VARCHAR(6) PRIMARY KEY CHECK (ORDERNO LIKE 'O%'),
    CLIENTNO VARCHAR(6),
    ORDERDATE DATE NOT NULL,
    DELYADDR VARCHAR(25),
    SALESMANNO VARCHAR(6),
    DELYTYPE CHAR(1) DEFAULT 'F' CHECK (DELYTYPE IN ('P', 'F')),
    BILLYN CHAR(1),
    DELYDATE DATE,
    ORDERSTATUS VARCHAR(10) CHECK (ORDERSTATUS IN ('In Process', 'Fulfilled', 'BackOrder', 'Cancelled')),
    FOREIGN KEY (CLIENTNO) REFERENCES CLIENT_MASTER(CLIENTNO),
    FOREIGN KEY (SALESMANNO) REFERENCES SALESMAN_MASTER(SALESMANNO)
    -- CONSTRAINT chk_delydate CHECK (DELYDATE >= ORDERDATE) -- Commented out because image data violates this constraint
);

-- SALES_ORDER_DETAILS Table
CREATE TABLE SALES_ORDER_DETAILS (
    ORDERNO VARCHAR(6),
    PRODUCTNO VARCHAR(6),
    QTYORDERED INT,
    QTYDISP INT,
    PRODUCTRATE DECIMAL(10,2),
    PRIMARY KEY (ORDERNO, PRODUCTNO),
    FOREIGN KEY (ORDERNO) REFERENCES SALES_ORDER(ORDERNO),
    FOREIGN KEY (PRODUCTNO) REFERENCES PRODUCT_MASTER(PRODUCTNO)
);

 -- INSERT DATA 
 ------------------------------------


--SALES_ORDER table


INSERT INTO SALES_ORDER VALUES
('O19001', 'C00001', '2004-06-12', 'S00001', 'F', 'N', '2002-07-20', 'In Process'),
('O19002', 'C00002', '2004-06-25', 'S00002', 'P', 'N', '2002-06-27', 'Cancelled'),
('O46865', 'C00003', '2004-02-18', 'S00003', 'F', 'Y', '2002-02-20', 'Fulfilled'),
('O19003', 'C00001', '2004-04-03', 'S00001', 'F', 'Y', '2002-04-07', 'Fulfilled'),
('O46866', 'C00004', '2004-05-20', 'S00002', 'P', 'N', '2002-05-22', 'Cancelled'),
('O19008', 'C00005', '2004-05-24', 'S00004', 'F', 'N', '2002-07-26', 'In Process');

INSERT INTO SALES_ORDER_DETAILS VALUES
('O19001', 'P00001', 4, 4, 525.00),
('O19001', 'P07965', 2, 1, 8400.00),
('O19001', 'P07885', 2, 1, 5250.00),
('O19002', 'P00001', 10, 0, 525.00),
('O46865', 'P07868', 3, 3, 3150.00),
('O46865', 'P07885', 3, 1, 5250.00),
('O46865', 'P00001', 10, 10, 525.00),
('O46865', 'P0345', 4, 4, 1050.00),
('O19003', 'P03453', 2, 2, 1050.00),
('O19003', 'P06734', 1, 1, 12000.00),
('O46866', 'P07965', 1, 0, 8400.00),
('O46866', 'P07975', 1, 0, 1050.00),
('O19008', 'P00001', 10, 5, 525.00),
('O19008', 'P07975', 5, 3, 1050.00);


-- Cannot add or update a child row: a foreign key constraint fails (`seles`.`sales_order_details`, CONSTRAINT `sales_order_details_ibfk_1` FOREIGN KEY (`ORDERNO`) REFERENCES `sales_order` (`ORDERNO`))