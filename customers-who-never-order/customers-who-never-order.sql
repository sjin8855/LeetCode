/* Write your T-SQL query statement below */
SELECT A.NAME AS CUSTOMERS
FROM CUSTOMERS A
LEFT JOIN ORDERS B
ON B.CUSTOMERID = A.ID
WHERE B.ID IS NULL