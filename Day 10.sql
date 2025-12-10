/* 
https://www.hackerrank.com/challenges/occupations
Corrections made 
Pivot the Occupation column in OCCUPATIONS so that each Name is sorted alphabetically and displayed underneath its corresponding Occupation. The output should consist of four columns (Doctor, Professor, Singer, and Actor) in that specific order, with their respective names listed alphabetically under each column.
Note: Print NULL when there are no more names corresponding to an occupation.
*/
with doctor as (
Select 
        name,
        ROW_NUMBER() OVER(order by name) as rn
FROM    OCCUPATIONS
WHERE occupation LIKE 'Doctor'
)

,professor as (
Select 
        name,
        ROW_NUMBER() OVER(order by name) as rn
FROM    OCCUPATIONS
WHERE occupation LIKE 'Professor'
)
,singer as (
Select 
        name,
        ROW_NUMBER() OVER(order by name) as rn
FROM    OCCUPATIONS
WHERE occupation LIKE 'Singer'
)
,actor as (
Select 
        name,
        ROW_NUMBER() OVER(order by name) as rn
FROM    OCCUPATIONS
WHERE occupation LIKE 'Actor'
)

SELECT
        d.name,
        p.name,
        s.name,
        a.name
FROM    professor p
LEFT JOIN doctor d on d.rn = p.rn
LEFT JOIN singer s on s.rn = p.rn
LEFT JOIN actor a on a.rn = p.rn
