-- 코드를 입력하세요
SELECT year(o.sales_date) year, month(o.sales_date) month, count(distinct(o.user_id)) purchased_user, round(count(distinct(o.user_id)) / (select count(*) from user_info where year(joined) = 2021), 1) purchased_ratio
from user_info u join online_sale o
on u.user_id = o.user_id
where year(u.joined) = 2021
group by year, month
order by year, month;