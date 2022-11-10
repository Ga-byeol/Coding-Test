-- 코드를 입력하세요
SELECT substr(product_code,1,2) category, count(*)
from product
group by category
order by category;
