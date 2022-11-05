-- 코드를 입력하세요
SELECT hour(datetime) hour, count(*) count
from animal_outs
where time(datetime)  >='09:00' and time(datetime) <= '19:59'
group by hour
order by hour;