-- 코드를 입력하세요
SELECT f1.category, f1.price, f1.product_name
from food_product f1, (select category, max(price) maxprice, product_name
                       from food_product
                       where category in('과자', '국', '김치', '식용유')
                       group by category) f2
where f1.category = f2.category and f1.price = f2.maxprice
group by f1.category
order by f1.price desc;
