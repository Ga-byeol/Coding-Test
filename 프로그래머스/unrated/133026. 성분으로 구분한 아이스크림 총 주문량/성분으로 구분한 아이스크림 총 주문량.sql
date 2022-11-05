-- 코드를 입력하세요
SELECT i.ingredient_type, sum(f.total_order) TOTAL_ORDER
from icecream_info i join first_half f
using (flavor)
group by i.ingredient_type
order by TOTAL_ORDER;