-- 코드를 작성해주세요
SELECT count(*) FISH_COUNT, MONTH(TIME) MONTH
FROM FISH_INFO
GROUP BY MONTH(time)
ORDER BY MONTH(time);
