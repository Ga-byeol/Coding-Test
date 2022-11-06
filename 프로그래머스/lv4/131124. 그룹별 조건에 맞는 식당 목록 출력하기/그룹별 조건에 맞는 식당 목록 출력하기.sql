-- 코드를 입력하세요
SELECT m.member_name, r.review_text, date_format(r.review_date, '%Y-%m-%d') review_date
from rest_review r join member_profile m
on r.member_id = m.member_id
where r.member_id in (select member_id
                     from rest_review
                     group by member_id
                     having count(member_id) = (select count(review_text) num
                                                from rest_review
                                                group by member_id
                                                order by num desc
                                                limit 1))
order by r.review_date, r.review_text;