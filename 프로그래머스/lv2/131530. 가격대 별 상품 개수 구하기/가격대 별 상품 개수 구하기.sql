-- 코드를 입력하세요
SELECT truncate(price, -4) price_group, count(*) products
from product
group by truncate(price, -4)
order by price;