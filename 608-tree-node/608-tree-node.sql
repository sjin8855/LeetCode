/* Write your T-SQL query statement below */
WITH PARENT_LIST AS (
    SELECT DISTINCT P_ID
    FROM TREE
)
SELECT   ID
        ,CASE WHEN A.P_ID IS NULL THEN 'Root' 
              WHEN B.P_ID IS NULL THEN 'Leaf'
                                  ELSE 'Inner' END AS TYPE
FROM TREE A
LEFT JOIN PARENT_LIST B
  ON A.ID = B.P_ID