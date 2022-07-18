/* Write your T-SQL query statement below */

WITH BUY AS (
    SELECT STOCK_NAME, SUM(PRICE) AS PRICE
    FROM STOCKS
    WHERE OPERATION = 'BUY'
    GROUP BY STOCK_NAME
),
SELL AS (
    SELECT STOCK_NAME, SUM(PRICE) AS PRICE
    FROM STOCKS
    WHERE OPERATION = 'SELL'
    GROUP BY STOCK_NAME
)
SELECT A.STOCK_NAME, B.PRICE - A.PRICE AS CAPITAL_GAIN_LOSS
FROM BUY A
JOIN SELL B
  ON A.STOCK_NAME = B.STOCK_NAME

    