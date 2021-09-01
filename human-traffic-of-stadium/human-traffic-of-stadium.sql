/* Write your T-SQL query statement below */

WITH TEMP_PEOPLE_CNT AS (

SELECT   A.ID AS AI
        ,B.ID AS BI
        ,C.ID AS CI
        ,A.VISIT_DATE AS AV
        ,B.VISIT_DATE AS BV
        ,C.VISIT_DATE AS CV
        ,A.PEOPLE AS AP
        ,B.PEOPLE AS BP
        ,C.PEOPLE AS CP
FROM STADIUM A
JOIN STADIUM B
ON A.ID = B.ID + 1
JOIN STADIUM C
ON A.ID = C.ID + 2 
WHERE A.PEOPLE >= 100 AND B.PEOPLE >= 100 AND C.PEOPLE >= 100)

SELECT *
FROM (
SELECT AI AS ID, AV AS VISIT_DATE, AP AS PEOPLE
FROM TEMP_PEOPLE_CNT
UNION
SELECT BI, BV, BP
FROM TEMP_PEOPLE_CNT
UNION
SELECT CI, CV, CP
FROM TEMP_PEOPLE_CNT) SUB
ORDER BY ID
