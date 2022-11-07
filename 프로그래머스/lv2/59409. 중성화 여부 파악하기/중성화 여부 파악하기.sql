-- 코드를 입력하세요
SELECT animal_id, name, if(substr(sex_upon_intake,1,1) != 'i', 'O', 'X') "중성화"
from animal_ins
order by animal_id;