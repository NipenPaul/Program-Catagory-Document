select t2.id 
from Weather t1, Weather t2
where t1.temperature < t2.temperature
and Datediff(t2.recorddate,  t1.recorddate)=1;
