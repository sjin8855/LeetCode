/*
SELECT *
FROM Department
PIVOT ( SUM(revenue) 
       FOR month in 
       (['Jan'], ['Feb'], ['Mar'], ['Apr'], ['May'], ['Jun'], ['Jul'], ['Aug'], ['Sep'], ['Oct'], ['Nov'], ['Dec'])) AS PV
*/

SELECT   ID
        ,SUM(CASE WHEN MONTH = 'Jan' THEN (REVENUE) ELSE NULL END) AS JAN_REVENUE
        ,SUM(CASE WHEN MONTH = 'Feb' THEN (REVENUE) ELSE NULL END) AS FEB_REVENUE
        ,SUM(CASE WHEN MONTH = 'Mar' THEN (REVENUE) ELSE NULL END) AS MAR_REVENUE
        ,SUM(CASE WHEN MONTH = 'Apr' THEN (REVENUE) ELSE NULL END) AS APR_REVENUE
        ,SUM(CASE WHEN MONTH = 'May' THEN (REVENUE) ELSE NULL END) AS MAY_REVENUE
        ,SUM(CASE WHEN MONTH = 'Jun' THEN (REVENUE) ELSE NULL END) AS JUN_REVENUE
        ,SUM(CASE WHEN MONTH = 'Jul' THEN (REVENUE) ELSE NULL END) AS JUL_REVENUE
        ,SUM(CASE WHEN MONTH = 'Aug' THEN (REVENUE) ELSE NULL END) AS AUG_REVENUE
        ,SUM(CASE WHEN MONTH = 'Sep' THEN (REVENUE) ELSE NULL END) AS SEP_REVENUE
        ,SUM(CASE WHEN MONTH = 'Oct' THEN (REVENUE) ELSE NULL END) AS OCT_REVENUE
        ,SUM(CASE WHEN MONTH = 'Nov' THEN (REVENUE) ELSE NULL END) AS NOV_REVENUE
        ,SUM(CASE WHEN MONTH = 'Dec' THEN (REVENUE) ELSE NULL END) AS DEC_REVENUE
FROM DEPARTMENT 
GROUP BY ID