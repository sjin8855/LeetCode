
SELECT USER_ID, MAX(TIME_STAMP) LAST_STAMP
FROM LOGINS
WHERE TIME_STAMP >= '2020-01-01' AND TIME_STAMP < '2021-01-01'
GROUP BY USER_ID