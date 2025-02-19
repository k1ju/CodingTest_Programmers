-- 코드를 입력하세요

WITH rental_list AS (SELECT CAR_ID
               FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
               WHERE '2022-10-16' BETWEEN  START_DATE AND END_DATE)
SELECT DISTINCT CAR_ID, 
CASE 
    WHEN CAR_ID IN (SELECT CAR_ID FROM rental_list) THEN '대여중'
    ELSE  '대여 가능'
END AVAILABILITY
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
ORDER BY 1 DESC;