/* Write your T-SQL query statement below */

WITH SALE_LIST AS (
    SELECT DISTINCT PRODUCT_ID, SALE_DATE
    FROM SALES
),
EXCEPT_DATA AS (
    SELECT DISTINCT PRODUCT_ID
    FROM SALE_LIST
    WHERE SALE_DATE < '2019-01-01' OR SALE_DATE > '2019-03-31'
)
SELECT PRODUCT_ID, PRODUCT_NAME
FROM PRODUCT A
WHERE PRODUCT_ID NOT IN (SELECT PRODUCT_ID FROM EXCEPT_DATA) AND EXISTS (SELECT 1 FROM SALE_LIST B WHERE A.PRODUCT_ID = B.PRODUCT_ID)