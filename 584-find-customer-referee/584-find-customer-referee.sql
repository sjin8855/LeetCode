/* Write your T-SQL query statement below */
SELECT NAME
FROM CUSTOMER
WHERE ISNULL(referee_id,0)  <> 2