Bulk Insert Data into SQL Server

* https://data36.com/how-to-import-data-into-sql-tables/
* https://www.mssqltips.com/sqlservertip/6109/bulk-insert-data-into-sql-server/



SQL Queries for Practice
* https://www.techbeamers.com/sql-query-questions-answers-for-practice/



SELECT * FROM runners 
WHERE id NOT IN (SELECT winner_id FROM races)

This will return empty set because NOT IN condition contains null value, then the outer query here will return an empty set.

SELECT * FROM runners 
WHERE id NOT IN 
(SELECT winner_id FROM races WHERE winner_id IS NOT null)


