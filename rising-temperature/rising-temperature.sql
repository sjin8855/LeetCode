/* Write your T-SQL query statement below */

SELECT ID
FROM WEATHER A
WHERE TEMPERATURE > (SELECT B.TEMPERATURE FROM WEATHER B WHERE B.RECORDDATE = dateadd(day,-1,A.RECORDDATE))
ORDER BY RECORDDATE