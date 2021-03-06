/* Write your T-SQL query statement below */


SELECT SUB.DEPARTMENT, EMP.NAME AS EMPLOYEE, SUB.SALARY
FROM (  SELECT B.NAME AS DEPARTMENT, MAX(A.SALARY) AS SALARY
        FROM EMPLOYEE A
        JOIN DEPARTMENT B 
        ON A.DEPARTMENTID = B. ID
        GROUP BY B.NAME) SUB
JOIN    DEPARTMENT DPT
  ON    SUB.DEPARTMENT = DPT.NAME
JOIN    EMPLOYEE EMP
  ON    DPT.ID = EMP.DEPARTMENTID AND SUB.SALARY = EMP.SALARY
