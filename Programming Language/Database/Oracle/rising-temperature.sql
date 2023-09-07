select t2.id 
from Weather t1, Weather t2
where t1.temperature < t2.temperature
and to_date(t2.recorddate) - to_date(t1.recorddate)=1;
