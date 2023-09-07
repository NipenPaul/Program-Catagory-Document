
select round(count(*) / (select count(distinct player_id) from Activity), 2)
as fraction
from Activity
where (player_id, Date_sub(event_date, interval 1 day)) in
(
  select player_id, min(event_date) as first_login from activity group by player_id
)
