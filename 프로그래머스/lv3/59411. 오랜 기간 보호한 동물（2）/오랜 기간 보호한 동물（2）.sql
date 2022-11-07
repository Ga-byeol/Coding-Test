-- 코드를 입력하세요
SELECT o.animal_id, o.name
from animal_ins i left join animal_outs o
on i.animal_id = o.animal_id
where o.datetime is not null
order by datediff(i.datetime,o.datetime)
limit 2;
