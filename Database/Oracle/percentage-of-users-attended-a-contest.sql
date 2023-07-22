select contest_id, round(count(r.contest_id)*100.00/(select count(*) from users),2) as percentage
from Register r 
group by contest_id
order by percentage desc, contest_id asc;
