SELECT NAME, BALANCE
FROM USERS A
JOIN (
SELECT ACCOUNT,SUM(AMOUNT) BALANCE
FROM TRANSACTIONS
GROUP BY ACCOUNT
HAVING SUM(AMOUNT) > 10000 ) B
  ON A.ACCOUNT = B.ACCOUNT