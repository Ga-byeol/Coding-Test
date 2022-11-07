-- 코드를 입력하세요
SELECT date_format(u.sales_date, '%Y-%m-%d'), u.product_id, u.user_id, u.sales_amount
from (select *
      from online_sale
      union all
      select offline_sale_id, null "user_id",product_id, sales_amount, sales_date
      from offline_sale) u
where u.sales_date like '2022-03%'
order by u.sales_date, u.product_id, u.user_id;