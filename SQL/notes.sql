
/*

mysql> show databases;
+--------------------+
| Database           |
+--------------------+
| information_schema |
| mysql              |
| performance_schema |
| sys                |
+--------------------+
4 rows in set (0.412 sec)

---------------------
create data base 
----------------------
create database <db name>;

mysql> create database myschool ;
Query OK, 1 row affected (0.208 sec)

mysql> show databases;
+--------------------+
| Database           |
+--------------------+
| information_schema |
| myschool           |
| mysql              |
| performance_schema |
| sys                |
+--------------------+
5 rows in set (0.021 sec)


---------------------
create table 
----------------------


create table <tbl-name>;
(
col-1 datatype(size),
col-1 datatype(size),
col-1 datatype(size),
col-1 datatype(size),
.
.
.
.

);

create table student
(name varchar(15),email varchar(15),contect varchar(15));
Query OK, 0 rows affected (0.317 sec)

mysql> show tables;
+--------------------+
| Tables_in_myschool |
+--------------------+
| student            |
+--------------------+
1 row in set (0.198 sec) 

-----------------
 know tha filds
-----------------

mysql> desc student;
+---------+-------------+------+-----+---------+-------+
| Field   | Type        | Null | Key | Default | Extra |
+---------+-------------+------+-----+---------+-------+
| name    | varchar(15) | YES  |     | NULL    |       |
| email   | varchar(15) | YES  |     | NULL    |       |
| contect | varchar(15) | YES  |     | NULL    |       |
+---------+-------------+------+-----+---------+-------+
3 rows in set (0.296 sec)

-----------------
 insert data
-----------------

insert into student values("mohit","mohit@gmail.com","9316303081");
Query OK, 1 row affected (0.422 sec)

insert into student values("rohit","mohit@gmail.com","9316303081");
insert into student values("rahul","rahul@gmail.com","8675849873");
insert into student values("manoj","manoj@gmail.com","7685764381");
insert into student values("divyesh","divyesh@gmail.com","6578948765");

----------------
insert null data
----------------

insert into student values("haresh","harh@gmail.com"," ",'surat');

insert into student values("naresh","narh@gmail.com",null,'vadodra');


-----------------
 display data
-----------------


select * from student;
+---------+-----------------+------------+
| name    | email           | contect    |
+---------+-----------------+------------+
| mohit   | mohit@gmail.com | 9316303081 |
| rohit   | mohit@gmail.com | 9316303081 |
| rahul   | rahul@gmail.com | 8675849873 |
| manoj   | manoj@gmail.com | 7685764381 |
| divyesh | div@gmail.com   | 6578948765 |
+---------+-----------------+------------+
5 rows in set (0.008 sec)

--------------------------------
 if i want perticuler row (colamun level filter)
--------------------------------

select name,contect from student;

+---------+------------+
| name    | contect    |
+---------+------------+
| mohit   | 9316303081 |
| rohit   | 9316303081 |
| rahul   | 8675849873 |
| manoj   | 7685764381 |
| divyesh | 6578948765 |
+---------+------------+
5 rows in set (0.007 sec)

------------------------------------
want perticuler row and holl table
------------------------------------

select *,name,contect from student;
+---------+-----------------+------------+---------+------------+
| name    | email           | contect    | name    | contect    |
+---------+-----------------+------------+---------+------------+
| mohit   | mohit@gmail.com | 9316303081 | mohit   | 9316303081 |
| rohit   | mohit@gmail.com | 9316303081 | rohit   | 9316303081 |
| rahul   | rahul@gmail.com | 8675849873 | rahul   | 8675849873 |
| manoj   | manoj@gmail.com | 7685764381 | manoj   | 7685764381 |
| divyesh | div@gmail.com   | 6578948765 | divyesh | 6578948765 |
+---------+-----------------+------------+---------+------------+
5 rows in set (0.114 sec)

--------------------------------------------
* is always at start not between not at end
--------------------------------------------

select name,contect,* from student;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '* from student' at line 1

select name,*,contect from student;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '*,contect from student' at line 1

-------------------------------------
row level filters
-------------------------------------

select * from student 
where name='mohit';

+-------+-----------------+------------+
| name  | email           | contect    |
+-------+-----------------+------------+
| mohit | mohit@gmail.com | 9316303081 |
+-------+-----------------+------------+
1 row in set (0.015 sec)

select name,contect from student where name='mohit';
+-------+------------+
| name  | contect    |
+-------+------------+
| mohit | 9316303081 |
+-------+------------+
1 row in set (0.009 sec)


--------------
 order by (asending)
--------------

select * from student order by name;

select * from student order by name;
+---------+-----------------+------------+
| name    | email           | contect    |
+---------+-----------------+------------+
| divyesh | div@gmail.com   | 6578948765 |
| manoj   | manoj@gmail.com | 7685764381 |
| mohit   | mohit@gmail.com | 9316303081 |
| rahul   | rahul@gmail.com | 8675849873 |
| rohit   | mohit@gmail.com | 9316303081 |
+---------+-----------------+------------+
5 rows in set (0.149 sec)

--------------
 order by (descending) 
--------------

select * from student order by name desc;
+---------+-----------------+------------+
| name    | email           | contect    |
+---------+-----------------+------------+
| rohit   | mohit@gmail.com | 9316303081 |
| rahul   | rahul@gmail.com | 8675849873 |
| mohit   | mohit@gmail.com | 9316303081 |
| manoj   | manoj@gmail.com | 7685764381 |
| divyesh | div@gmail.com   | 6578948765 |
+---------+-----------------+------------+
5 rows in set (0.139 sec)

----------------
 DATA TYPE
----------------

SIZE >> 1 BYTE = 8 BITE = 2^8

DT              SIZE        RANGE
--------------------------------------
BIT             -------       1 TO 64
TINYINT         1 BYTE       -128 TO +127
SMALLINT        2 BYTES      -32768 TO +32767   
MDEIUMINT       3 BYTES      -------
INT/INTEGER     4 BYTES      -+2.15 * 10^9
BIGINT          8 BYTES      LARGE


NUMERIC         ------       --------


VARCHAR                      65535 CHARRECTER  ONLY                 
CHAR                         255 CHARECTER ONLY
TEXT           65535 BYTES
ENUM(CONSTUNT)
BLOG(BINARY LARGE OBJECT)


DIV 


YEAR        YYYY
DATE        YYY-MM-DD
TIME        HH:MM:SS
DATETIME    YYY-MM-DD HH:MM:SS 
TIMESTAMP   YYY-MM-DD HH:MM:SS UTCs


JSON

-------------------
     delete
-------------------

delete from <table-name>; // delete all records from table

drop table <table name>; // delete table with structure

delete from <table name> where <condition>;
ex:> delete from student where name = 'mohit';


----------
 truncate
----------

truncate table <table name>;//delete holl tabel and after 
                              that truncate create same table again


------------
  update
------------

update <tb name> set <col name> = <value>; // without condition 

update student set city = 'surat';
mysql> select * from student;
+---------+-----------------+------------+-------+
| name    | email           | contect    | city  |
+---------+-----------------+------------+-------+
| mohit   | mohit@gmail.com | 9316303081 | surat |
| rohit   | mohit@gmail.com | 9316303081 | surat |
| rahul   | rahul@gmail.com | 8675849873 | surat |
| manoj   | manoj@gmail.com | 7685764381 | surat |
| divyesh | div@gmail.com   | 6578948765 | surat |
+---------+-----------------+------------+-------+ 


update <tb name> set <col name> = <value> (new value) where <col name> = <value> (new value) ; // with condition

update student set city = 'vadodra' where name = 'mohit';

select * from student;
+---------+-----------------+------------+---------+
| name    | email           | contect    | city    |
+---------+-----------------+------------+---------+
| mohit   | mohit@gmail.com | 9316303081 | vadodra |
| rohit   | mohit@gmail.com | 9316303081 | surat   |
| rahul   | rahul@gmail.com | 8675849873 | surat   |
| manoj   | manoj@gmail.com | 7685764381 | surat   |
| divyesh | div@gmail.com   | 6578948765 | surat   |
+---------+-----------------+------------+---------+


update student set city = 'Vapi' where contact=null;
Query OK, 0 rows affected (0.008 sec)
Rows matched: 0  Changed: 0  Warnings: 0 

///// we can not take null as reference , null is not a value ;
    if we have to take null as reference use is null or is not null ;

for exm:

    update student set city = 'Vapi' where contact is NULL;
    Query OK, 1 row affected (0.035 sec)
    Rows matched: 1  Changed: 1  Warnings: 0

    select * from student;
+---------+-----------------+------------+---------+
| name    | email           | contect    | city    |
+---------+-----------------+------------+---------+
| mohit   | mohit@gmail.com | 9316303081 | vadodra |
| rohit   | mohit@gmail.com | 9316303081 | surat   |
| rahul   | rahul@gmail.com | 8675849873 | surat   |
| manoj   | manoj@gmail.com | 7685764381 | surat   |
| divyesh | div@gmail.com   | 6578948765 | surat   |
| haresh  | harh@gmail.com  |            | surat   |
| naresh  | narh@gmail.com  | NULL       | Vapi    |
+---------+-----------------+------------+---------+

-------------
  alter
-------------

ADD CLM
----------

ALTER TABLE <tb name>
add column <col-name> data-type(size);


 ALTER TABLE student
    -> add column city varchar(15);
Query OK, 0 rows affected (0.513 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> select * from student;
+---------+-----------------+------------+------+
| name    | email           | contect    | city |
+---------+-----------------+------------+------+
| mohit   | mohit@gmail.com | 9316303081 | NULL |
| rohit   | mohit@gmail.com | 9316303081 | NULL |
| rahul   | rahul@gmail.com | 8675849873 | NULL |
| manoj   | manoj@gmail.com | 7685764381 | NULL |
| divyesh | div@gmail.com   | 6578948765 | NULL |
+---------+-----------------+------------+------+
5 rows in set (0.115 sec)

 ALTER TABLE student
 add column state varchar(15);

 desc student;
+---------+-------------+------+-----+---------+-------+
| Field   | Type        | Null | Key | Default | Extra |
+---------+-------------+------+-----+---------+-------+
| name    | varchar(15) | YES  |     | NULL    |       |
| email   | varchar(30) | YES  |     | NULL    |       |
| contect | varchar(30) | YES  |     | NULL    |       |
| city    | varchar(15) | YES  |     | NULL    |       |
| state   | varchar(15) | YES  |     | NULL    |       |
+---------+-------------+------+-----+---------+-------+



MODIFY
----------

ALTER TABLE student
MODIFY COLUMN <clm name> data type(size);  

 ALTER TABLE student
    -> MODIFY contect varchar(30);
Query OK, 0 rows affected (0.178 sec)
Records: 0  Duplicates: 0  Warnings: 0

ALTER TABLE student
    -> MODIFY COLUMN email varchar(30);
Query OK, 0 rows affected (0.181 sec)
Records: 0  Duplicates: 0  Warnings: 0

desc student;
+---------+-------------+------+-----+---------+-------+
| Field   | Type        | Null | Key | Default | Extra |
+---------+-------------+------+-----+---------+-------+
| name    | varchar(15) | YES  |     | NULL    |       |
| email   | varchar(30) | YES  |     | NULL    |       |
| contect | varchar(30) | YES  |     | NULL    |       |
| city    | varchar(15) | YES  |     | NULL    |       |
+---------+-------------+------+-----+---------+-------+
4 rows in set (0.116 sec)



drop
------

ALTER TABLE <tb name>
DROP COLUMN <clm name>;


ALTER TABLE student
DROP COLUMN State;

Query OK, 0 rows affected (0.219 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> desc student;
+---------+-------------+------+-----+---------+-------+
| Field   | Type        | Null | Key | Default | Extra |
+---------+-------------+------+-----+---------+-------+
| name    | varchar(15) | YES  |     | NULL    |       |
| email   | varchar(30) | YES  |     | NULL    |       |
| contect | varchar(30) | YES  |     | NULL    |       |
| city    | varchar(15) | YES  |     | NULL    |       |
+---------+-------------+------+-----+---------+-------+
4 rows in set (0.017 sec)


RENAME
-----------


ALTER TABLE student
RENAME COLUMN <old clm name> TO <new clm name>;

-> rename table 

alter table < old tbl name>
rename  to <new table name>;

ALTER TABLE student
    -> RENAME COLUMN contect TO mobileno;
Query OK, 0 rows affected (0.277 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> desc student;
+----------+-------------+------+-----+---------+-------+
| Field    | Type        | Null | Key | Default | Extra |
+----------+-------------+------+-----+---------+-------+
| name     | varchar(15) | YES  |     | NULL    |       |
| email    | varchar(30) | YES  |     | NULL    |       |
| mobileno | varchar(30) | YES  |     | NULL    |       |
| city     | varchar(15) | YES  |     | NULL    |       |
+----------+-------------+------+-----+---------+-------+

add constrain
--------------

ALTER TABLE bagproject
ADD CONTRAINT PK_BAGPROJECT PRIMARY KEY(color,size,capacity);

-------------------
 create new table 
 primery key
-------------------

create table student
(grno int primary key,name varchar(25),email varchar(35),contect varchar(15),city varchar(15));


insert into student1 values("001","mohit","mohit@gmail.com","9316303081","surat");
insert into student1 values("002","rohit","mohit@gmail.com","9316303081","surat");
insert into student1 values("003","rahul","rahul@gmail.com","8675849873","surat");
insert into student1 values("004","manoj","manoj@gmail.com","7685764381","surat");
insert into student1 values("005","divyesh","divyesh@gmail.com","6578948765","vapi");

select * from student1;
+------+---------+-------------------+------------+-------+
| grno | name    | email             | contect    | city  |
+------+---------+-------------------+------------+-------+
|    1 | mohit   | mohit@gmail.com   | 9316303081 | surat |
|    2 | rohit   | mohit@gmail.com   | 9316303081 | surat |
|    3 | rahul   | rahul@gmail.com   | 8675849873 | surat |
|    4 | manoj   | manoj@gmail.com   | 7685764381 | surat |
|    5 | divyesh | divyesh@gmail.com | 6578948765 | vapi  |
+------+---------+-------------------+------------+-------+
5 rows in set (0.009 sec)

primery key - uniqly data indentify
            - no allow duplicate data 
            - not allow null value
            - not compalsory but recommended to use 
            - to create relation another table collumn
            - only one primory key allowd for a singal table 
         ** - one table can be combine up to 32 column 



    r-g-b   s-m-l   20-30-40
    color   size    capacity  price
      r       s       20      0800
      r       s       30      1200
      r       s       40      1600
      r       m       20      0800
      r       m       30      1200
      r       m       40      1600
      r       l       20      0800
      r       l       30      1200
      r       l       40      1600
    -------------------------------
      g       s       20      0800
      g       s       30      1200
      g       s       40      1600
      g       m       20      0800
      g       m       30      1200
      g       m       40      1600
      g       l       20      0800
      g       l       30      1200
      g       l       40      1600
    -------------------------------
      b       s       20      0800
      b       s       30      1200
      b       s       40      1600
      b       m       20      0800
      b       m       30      1200
      b       m       40      1600
      b       l       20      0800
      b       l       30      1200
      b       l       40      1600

    -----------------------
**** camposite primery key
    -----------------------

-> to avoide dublicate sicvence of records

sintex:>
CONSTRAINT <NAME OF CONSTRAINT> PRIMARY KEY(clm1,clm2,clm3)

  create table bagproject(
  color varchar(10),
  size varchar(10),
  capacity varchar(10),
  price decimal(6,2),
  CONSTRAINT PK_BAGPROJECT PRIMARY KEY(color,size,capacity)
  );

desc bagproject;
+----------+--------------+------+-----+---------+-------+
| Field    | Type         | Null | Key | Default | Extra |
+----------+--------------+------+-----+---------+-------+
| color    | varchar(10)  | NO   | PRI | NULL    |       |
| size     | varchar(10)  | NO   | PRI | NULL    |       |
| capacity | varchar(10)  | NO   | PRI | NULL    |       |
| price    | decimal(6,2) | YES  |     | NULL    |       |
+----------+--------------+------+-----+---------+-------+

      insert into bagproject values("r","s","20",0800);
      insert into bagproject values("r","s","30",1200);
      insert into bagproject values("r","s","40",1600);
      insert into bagproject values("r","m","20",0800);
      insert into bagproject values("r","m","30",1200);
      insert into bagproject values("r","m","40",1600);
      insert into bagproject values("r","l","20",0800);
      insert into bagproject values("r","l","30",1200);
      insert into bagproject values("r","l","40",1600);
      insert into bagproject values("g","s","20",0800);
      insert into bagproject values("g","s","30",1200);
      insert into bagproject values("g","s","40",1600);
      insert into bagproject values("g","m","20",0800);
      insert into bagproject values("g","m","30",1200);
      insert into bagproject values("g","m","40",1600);
      insert into bagproject values("g","l","20",0800);
      insert into bagproject values("g","l","30",1200);
      insert into bagproject values("g","l","40",1600);
      insert into bagproject values("b","s","20",0800);
      insert into bagproject values("b","s","30",1200);
      insert into bagproject values("b","s","40",1600);
      insert into bagproject values("b","m","20",0800);
      insert into bagproject values("b","m","30",1200);
      insert into bagproject values("b","m","40",1600);
      insert into bagproject values("b","l","20",0800);
      insert into bagproject values("b","l","30",1200);
      insert into bagproject values("b","l","40",1600);

select * from bagproject;
+-------+------+----------+---------+
| color | size | capacity | price   |
+-------+------+----------+---------+
| b     | l    | 20       |  800.00 |
| b     | l    | 30       | 1200.00 |
| b     | l    | 40       | 1600.00 |
| b     | m    | 20       |  800.00 |
| b     | m    | 30       | 1200.00 |
| b     | m    | 40       | 1600.00 |
| b     | s    | 20       |  800.00 |
| b     | s    | 30       | 1200.00 |
| b     | s    | 40       | 1600.00 |
| g     | l    | 20       |  800.00 |
| g     | l    | 30       | 1200.00 |
| g     | l    | 40       | 1600.00 |
| g     | m    | 20       |  800.00 |
| g     | m    | 30       | 1200.00 |
| g     | m    | 40       | 1600.00 |
| g     | s    | 20       |  800.00 |
| g     | s    | 30       | 1200.00 |
| g     | s    | 40       | 1600.00 |
| r     | l    | 20       |  800.00 |
| r     | l    | 30       | 1200.00 |
| r     | l    | 40       | 1600.00 |
| r     | m    | 20       |  800.00 |
| r     | m    | 30       | 1200.00 |
| r     | m    | 40       | 1600.00 |
| r     | s    | 20       |  800.00 |
| r     | s    | 30       | 1200.00 |
| r     | s    | 40       | 1600.00 |
+-------+------+----------+---------+

select concat(color,'-',size,'-',capacity)as "product_code" from bagproject;

+--------------+
| product_code |
+--------------+
| b-l-20       |
| b-l-30       |
| b-l-40       |
| b-m-20       |
| b-m-30       |
| b-m-40       |
| b-s-20       |
| b-s-30       |
| b-s-40       |
| g-l-20       |
| g-l-30       |
| g-l-40       |
| g-m-20       |
| g-m-30       |
| g-m-40       |
| g-s-20       |
| g-s-30       |
| g-s-40       |
| r-l-20       |
| r-l-30       |
| r-l-40       |
| r-m-20       |
| r-m-30       |
| r-m-40       |
| r-s-20       |
| r-s-30       |
| r-s-40       |
+--------------+

--------------
  contraint
--------------
+--------------+----------------------------------------------+--------------+-----------------------+
| Constraint   | Main Purpose                                 | Can Be NULL? | Limit Per Table       |
+--------------+----------------------------------------------+--------------+-----------------------+
| NOT NULL     | Prevents empty/missing values.               | No           | No limit              |
| UNIQUE       | Ensures all values are distinct.             | Yes          | No limit              |
| PRIMARY KEY  | Uniquely identifies each row.                | No           | Exactly 1 per table   |
| FOREIGN KEY  | Links data to another table.                 | Yes          | No limit              |
| CHECK        | Validates values against a custom condition. | Yes          | No limit              |
| DEFAULT      | Inserts a fallback value if none is provided.| Yes          | No limit              |
+--------------+----------------------------------------------+--------------+-----------------------+


create table bagproject1(
  color varchar(10) not null,
  size varchar(10) unique,
  capacity varchar(10) ,
  price decimal(6,2)
 
  );

  desc bagproject1;
+----------+--------------+------+-----+---------+-------+
| Field    | Type         | Null | Key | Default | Extra |
+----------+--------------+------+-----+---------+-------+
| color    | varchar(10)  | NO   |     | NULL    |       |
| size     | varchar(10)  | YES  | UNI | NULL    |       |
| capacity | varchar(10)  | YES  |     | NULL    |       |
| price    | decimal(6,2) | YES  |     | NULL    |       |
+----------+--------------+------+-----+---------+-------+


      insert into bagproject1 values("r","s","20",0800);
      insert into bagproject1 values("r","s","30",1200);
      insert into bagproject1 values("r","s","40",1600);

//// constrain unique not allow unic data to insert
////ERROR 1062 (23000): Duplicate entry 's' for key 'bagproject1.size'

select * from bagproject1;
+-------+------+----------+--------+
| color | size | capacity | price  |
+-------+------+----------+--------+
| r     | s    | 20       | 800.00 |
+-------+------+----------+--------+
1 row in set (0.010 sec)



-------------------------
      FOREIGN KEY
-------------------------
SYNTEX:>

CREATE TABLE <table-name> (
    col-1 int NOT NULL PRIMARY KEY,
    col-2 int,
    CONSTRAINT <contstraint-name> 
    FOREIGN KEY (col of this table) REFERENCES <reference-table>(col reference-table-column)
);




manufacturing production
-------------------------

  analyze production machine,enventry,quality,maintainance


  1 data base

     CREATE DATABASE manufacturing_db;

  2 create table 

      PRODUCT TABLE
      --------------

      CREATE TABLE products(
      product_id int PRIMARY KEY,
      product name VARCHAR(75),
      category VARCHAR(50),
      product_cost DECIMAL(9,2)
      );

    machine table
    ---------------

    CREATE TABLE machine(
      machine_id int PRIMARY KEY,
      machine name VARCHAR(75),
      production_line VARCHAR(50),
      machine_install_date DATE
      );

    production table
    -----------------

    CREATE TABLE production(
      production_id int PRIMARY KEY,
      product_id int,
      machine_id int,
      production_date DATE,
      units_produced int,
      units_defective int,
      production_duration DECIMAL(5,2)
      CONSTRAINT FK_PRODUCT FOREIGN KEY(product_id) REFERENCES products(product_id),
      CONSTRAINT FK_MACHINE FOREIGN KEY(machine_id) REFERENCES machine(machine_id),
      );

      maintainance table
      --------------------

      CREATE TABLE maintainance(
      maintainance_id int PRIMARY KEY,
      machine_id int,
      maintainance

      product name VARCHAR(75),
      category VARCHAR(50),
      product_cost DECIMAL(9,2)
      );


---------------------------
      check constrainn
---------------------------
-> to chek tha condition like cost production mantainance or othier this that
  i want to chek tha condition

  CONSTRAINT <name of constrent> CHECK (expretion)

  CREATE TABLE products(
      product_id int PRIMARY KEY,
      product name VARCHAR(75),
      category VARCHAR(50),
      product_cost DECIMAL(9,2)
      CONSTRAINT chk_product_cost CHECK (product_cost >=0)
      );


-----------------------------
      defult constraint
-----------------------------

<column name> datatype(size) NOT NULL DEFULT <defult data>

    machine_install_data DATE NOT NULL DEFULT (CURRENT_DATE);




===========================================
      AGREEGAT FUNCTION
===========================================

------
  sum
-------

SELECT SUM(FILD_NAME) FROM <TABLE_NAME>;

total of singal column
--------------------------

SELECT SUM(product_cost) "total_of_product_cost" from products;

+-----------------------+
| Total sum of products |
+-----------------------+
|               1261.95 |
+-----------------------+

total of two column
--------------------------

select *,(units_produced+units_defective) from production;


------
  avg
-------

SELECT AVG(FILD_NAME) FROM <TABLE_NAME>;

mysql> select avg(product_cost) from products;
+-------------------+
| avg(product_cost) |
+-------------------+
|         84.130000 |
+-------------------+
1 row in set (0.006 sec)

-------
  MIN
-------

SELECT MIN(FILD_NAME) FROM <TABLE_NAME>;

select min(product_cost) from products;
+-------------------+
| min(product_cost) |
+-------------------+
|              0.25 |
+-------------------+
1 row in set (0.105 sec)

-------
  MAX
-------

SELECT MAX(FILD_NAME) FROM <TABLE_NAME>;

select max(product_cost) from products;
+-------------------+
| max(product_cost) |
+-------------------+
|            600.00 |
+-------------------+
1 row in set (0.007 sec)

----------
  COUNT
----------

SELECT COUNT(*) FROM PRODUCTS WHERE CATEGORY="container";

 select count(*) from products where category = 'container';
+----------+
| count(*) |
+----------+
|        6 |
+----------+
1 row in set (0.108 sec)

-----------
 distinct
-----------

SELECT distinct category FROM product;
select distinct category from products;
+-----------+
| category  |
+-----------+
| container |
| holdings  |
| packaging |
+-----------+
3 rows in set (0.112 sec)


SELECT COUNT(distinct category) FROM product;

+--------------------------+
| count(distinct category) |
+--------------------------+
|                        3 |
+--------------------------+
1 row in set (0.008 sec)

===========================
    GROUP BY
===========================

select column, agg_func(agg_col)
from <table-name>
where <expression>  --optional
group by column

exampal:..


select production_date,sum(units_produced),sum(units_defective) 
from production 
group by production_date;

select production_date,sum(units_produced),sum(units_defective) 
from production 
group by production_date
having sum(units_produced) < 10000  ;

select production_date,sum(units_produced),sum(units_defective) 
from production 
where machine_id <> 1001
group by production_date;

select production_date,sum(units_produced),sum(units_defective) 
from production 
where machine_id <> 1001
group by production_date
having sum(units_produced) > 10000  ;

============================
    JOINTS
============================

CREATE DATABASE forjoin;

create table table_1(
tbl_1_col_1 int,
tbl_1_col_2 varchar(5)

);

insert into table_1 values(1,'a');
insert into table_1 values(2,'b');
insert into table_1 values(3,'d');
insert into table_1 values(4,'f');
insert into table_1 values(5,'z');

create table table_2(
tbl_2_col_1 int,
tbl_2_col_2 varchar(5)

);

insert into table_2 values(11,'b');
insert into table_2 values(12,'c');
insert into table_2 values(13,'d');
insert into table_2 values(14,'p');
insert into table_2 values(15,'q');

innner join
--------------------

select *
from table_2 t2
inner join table_1 t1
on t1.tbl_1_col_2 = tbl_2_col_2;
+-------------+-------------+-------------+-------------+
| tbl_2_col_1 | tbl_2_col_2 | tbl_1_col_1 | tbl_1_col_2 |
+-------------+-------------+-------------+-------------+
|          11 | b           |           2 | b           |
|          13 | d           |           3 | d           |
+-------------+-------------+-------------+-------------+
3 rows in set (0.155 sec)


left join
------------

    select *
    from table_1 t1
    left join table_2 t2
    on t1.tbl_1_col_2 =t2.tbl_2_col_2;
+-------------+-------------+-------------+-------------+
| tbl_1_col_1 | tbl_1_col_2 | tbl_2_col_1 | tbl_2_col_2 |
+-------------+-------------+-------------+-------------+
|           1 | a           |        NULL | NULL        |
|           2 | b           |          11 | b           |
|           3 | d           |          13 | d           |
|           4 | f           |        NULL | NULL        |
|           5 | z           |        NULL | NULL        |
+-------------+-------------+-------------+-------------+
5 rows in set (0.119 sec)


only left join
-----------------
 select *
     from table_1 t1
     left join table_2 t2
     on t1.tbl_1_col_2 =t2.tbl_2_col_2
    where t2.tbl_2_col_1 is null; 

+-------------+-------------+-------------+-------------+
| tbl_1_col_1 | tbl_1_col_2 | tbl_2_col_1 | tbl_2_col_2 |
+-------------+-------------+-------------+-------------+
|           1 | a           |        NULL | NULL        |
|           4 | f           |        NULL | NULL        |
|           5 | z           |        NULL | NULL        |
+-------------+-------------+-------------+-------------+

right join
---------------

  select *
  from table_1 t1
  right join table_2 t2
  on t1.tbl_1_col_2 = t2.tbl_2_col_2;

+-------------+-------------+-------------+-------------+
| tbl_1_col_1 | tbl_1_col_2 | tbl_2_col_1 | tbl_2_col_2 |
+-------------+-------------+-------------+-------------+
|           2 | b           |          11 | b           |
|        NULL | NULL        |          12 | c           |
|           3 | d           |          13 | d           |
|        NULL | NULL        |          14 | p           |
|        NULL | NULL        |          15 | q           |
+-------------+-------------+-------------+-------------+


only rihjt join
------------------
select *
  from table_1 t1
  right join table_2 t2
  on t1.tbl_1_col_2 = t2.tbl_2_col_2
  where t1.tbl_1_col_2 is null;

+-------------+-------------+-------------+-------------+
| tbl_1_col_1 | tbl_1_col_2 | tbl_2_col_1 | tbl_2_col_2 |
+-------------+-------------+-------------+-------------+
|        NULL | NULL        |          12 | c           |
|        NULL | NULL        |          14 | p           |
|        NULL | NULL        |          15 | q           |
+-------------+-------------+-------------+-------------+
2 rows in set (0.016 sec)


simpal syntext
--------------------

select t1.tbl_1_col_2,t2.tbl_2_col_2
from table_1 t1
inner join table_2 t2 on t1.tbl_1_col_2 = t2.tbl_2_col_2;


create table table_3(
tbl_3_col_1 int,
tbl_3_col_2 varchar(5)
);

insert into table_3 values(111,'a');
insert into table_3 values(112,'b');
insert into table_3 values(113,'m');
insert into table_3 values(114,'p');
insert into table_3 values(115,'z');

);

========================================================
              joins using 3 tabloes
========================================================

select *
from table_2 t2
inner join table_1 t1 on t1.tbl_1_col_2 = tbl_2_col_2
inner join table_3 t3 on t2.tbl_2_col_2 = tbl_3_col_2;

+-------------+-------------+-------------+-------------+-------------+-------------+
| tbl_2_col_1 | tbl_2_col_2 | tbl_1_col_1 | tbl_1_col_2 | tbl_3_col_1 | tbl_3_col_2 |
+-------------+-------------+-------------+-------------+-------------+-------------+
|          11 | b           |           2 | b           |         112 | b           |
+-------------+-------------+-------------+-------------+-------------+-------------+   

select *
from table_2 t2
left join table_1 t1 on t1.tbl_1_col_2 = tbl_2_col_2
inner join table_3 t3 on t1.tbl_1_col_2 = tbl_3_col_2;

+-------------+-------------+-------------+-------------+-------------+-------------+
| tbl_2_col_1 | tbl_2_col_2 | tbl_1_col_1 | tbl_1_col_2 | tbl_3_col_1 | tbl_3_col_2 |
+-------------+-------------+-------------+-------------+-------------+-------------+
|          11 | b           |           2 | b           |         112 | b           |
+-------------+-------------+-------------+-------------+-------------+-------------+

select *
from table_2 t2
inner join table_1 t1 on t1.tbl_1_col_2 = tbl_2_col_2
left join table_3 t3 on t2.tbl_2_col_2 = tbl_3_col_2;

+-------------+-------------+-------------+-------------+-------------+-------------+
| tbl_2_col_1 | tbl_2_col_2 | tbl_1_col_1 | tbl_1_col_2 | tbl_3_col_1 | tbl_3_col_2 |
+-------------+-------------+-------------+-------------+-------------+-------------+
|          11 | b           |           2 | b           |         112 | b           |
|          13 | d           |           3 | d           |        NULL | NULL        |
+-------------+-------------+-------------+-------------+-------------+-------------+

select *
from table_1 t1
left join table_2 t2 on t1.tbl_1_col_2 = tbl_2_col_2
left join table_3 t3 on t2.tbl_2_col_2 = tbl_3_col_2;

+-------------+-------------+-------------+-------------+-------------+-------------+
| tbl_1_col_1 | tbl_1_col_2 | tbl_2_col_1 | tbl_2_col_2 | tbl_3_col_1 | tbl_3_col_2 |
+-------------+-------------+-------------+-------------+-------------+-------------+
|           1 | a           |        NULL | NULL        |        NULL | NULL        |
|           2 | b           |          11 | b           |         112 | b           |
|           3 | d           |          13 | d           |        NULL | NULL        |
|           4 | f           |        NULL | NULL        |        NULL | NULL        |
|           5 | z           |        NULL | NULL        |        NULL | NULL        |
+-------------+-------------+-------------+-------------+-------------+-------------+

==========================================================================================================
    SUB QUERY 
==========================================================================================================

SELECT * FROM PRODUCTS
WHERE product_id IN 
(SELECT product_id 
FROM production);

SELECT * FROM PRODUCTS
WHERE product_id NOT IN 
(SELECT product_id 
FROM production);

SELECT * 
FROM PRODUCTS PR 
WHERE EXISTS
(SELECT 
product_id 
FROM production p
WHERE P.product_id = PR.product_id
);

SELECT * 
FROM PRODUCTS PR 
WHERE  NOT EXISTS
(SELECT 
product_id 
FROM production p
WHERE P.product_id = PR.product_id
);

==========================================================================================================
    STRING HANDLING
==========================================================================================================

LENGTH


*/  