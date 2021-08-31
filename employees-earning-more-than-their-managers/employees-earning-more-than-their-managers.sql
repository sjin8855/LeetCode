/* Write your T-SQL query statement below */
SELECT NAME AS EMPLOYEE
FROM EMPLOYEE A
WHERE SALARY > (SELECT SALARY 
                FROM EMPLOYEE B
                WHERE A.MANAGERID = B.ID)
                