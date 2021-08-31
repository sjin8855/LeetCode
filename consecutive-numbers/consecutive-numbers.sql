/* Write your T-SQL query statement below */
SELECT DISTINCT NUM AS ConsecutiveNums
FROM LOGS A
WHERE NUM = (SELECT NUM
             FROM LOGS B
             WHERE B.ID = A.ID + 1) AND
      NUM = (SELECT NUM
             FROM LOGS C
             WHERE C.ID = A.ID + 2)