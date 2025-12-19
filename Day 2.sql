/*
https://www.hackerrank.com/domains/sql

Q1.Query the NAME field for all American cities in the CITY table with populations larger than 120000. The CountryCode for America is USA.
The CITY table is described as follows:
ID,NUMBER,NAME,VARCHAR2 (17)COUNTRYCODE,VARCHAR2 (3)DISTRICT,VARCHAR2 ( 20),POPULATION,NUMBER

Solution:
*/
SELECT name FROM city where countrycode = 'USA' AND population >120000;
/*
Q2.Query all columns (attributes) for every row in the CITY table.
The CITY table is described as follows:
ID,NUMBER,NAME,VARCHAR2 (17)COUNTRYCODE,VARCHAR2 (3)DISTRICT,VARCHAR2 ( 20),POPULATION,NUMBER

Solution:
*/
SELECT ID,NAME,COUNTRYCODE,DISTRICT,POPULATION from city;
/*
Q3.Query all columns for a city in CITY with the ID 1661.
The CITY table is described as follows:
ID,NUMBER,NAME,VARCHAR2 (17)COUNTRYCODE,VARCHAR2 (3)DISTRICT,VARCHAR2 ( 20),POPULATION,NUMBER

Solution:
*/
SELECT ID,NAME,COUNTRYCODE,DISTRICT,POPULATION from city where ID = 1661;
/*
