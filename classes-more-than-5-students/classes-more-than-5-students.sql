/* Write your T-SQL query statement below */
WITH DISTINCT_TBL AS (
SELECT DISTINCT *
FROM COURSES
)
SELECT CLASS
FROM DISTINCT_TBL
GROUP BY CLASS
HAVING COUNT(*) > = 5
