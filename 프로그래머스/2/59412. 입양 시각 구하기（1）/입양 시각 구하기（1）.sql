-- 코드를 입력하세요
SELECT HOUR(DATETIME) HOUR, count(*) COUNT
FROM ANIMAL_OUTS
GROUP BY HOUR(DATETIME)
HAVING HOUR BETWEEN 09 AND 19
ORDER BY HOUR;