/*
https://www.hackerrank.com/domains/sql

Q1.Query all attributes of every Japanese city in the CITY table. The COUNTRYCODE for Japan is JPN.

The CITY table is described as follows:
ID NUMBER,NAME VARCHAR2 (17),COUNTRYCODE VARCHAR2(3),DISTRICT VARCHAR2 (20),POPULATION NUMBER

Solution:
*/
SELECT ID,NAME,COUNTRYCODE,DISTRICT,POPULATION from city WHERE COUNTRYCODE ='JPN';

/*
Q2.Query the names of all the Japanese cities in the CITY table. The COUNTRYCODE for Japan is JPN.

The CITY table is described as follows:
ID NUMBER,NAME VARCHAR2 (17),COUNTRYCODE VARCHAR2(3),DISTRICT VARCHAR2 (20),POPULATION NUMBER

Solution:
*/
SELECT NAME from city WHERE COUNTRYCODE ='JPN';
/*
Q3.Query a list of CITY and STATE from the STATION table.

The STATION table is described as follows:
ID NUMBER,CITY VARCHAR2 (21),STATE VARCHAR2 (2),LAT N NUMBER,LONG W NUMBER

Solution:
*/
SELECT CITY,STATE from STATION;
/*
Q4.Query a list of CITY names from STATION for cities that have an even ID number. Print the results in any order, but exclude duplicates from the answer.

The STATION table is described as follows:  
ID NUMBER,CITY VARCHAR2 (21),STATE VARCHAR2 (2),LAT N NUMBER,LONG W NUMBER

Solution:
*/
SELECT distinct CITY from STATION WHERE MOD(ID,2)=0;



