-- 코드를 입력하세요
SELECT r1.food_type, r1.rest_id, r1.rest_name, r1.favorites
from rest_info r1, (select food_type, rest_id, rest_name, max(favorites) maxfav
                    from rest_info
                    group by food_type) r2
where r1.food_type = r2.food_type and r1.favorites = r2.maxfav
group by r1.food_type
order by r1.food_type desc;