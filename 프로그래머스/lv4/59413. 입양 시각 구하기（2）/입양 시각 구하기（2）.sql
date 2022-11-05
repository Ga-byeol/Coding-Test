with recursive time as(
    select 0 as datetime
    union all
    select datetime+1 from time where datetime < 23
)

SELECT t.datetime hour, count(a.datetime) count
from time t left join animal_outs a
on t.datetime = hour(a.datetime)
group by hour(a.datetime), hour
order by hour;