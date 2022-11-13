SELECT f.flavor
from first_half  f join (select flavor, sum(total_order) s
                         from july
                         group by flavor) j
on f.flavor = j.flavor
order by f.total_order + s desc
limit 3;