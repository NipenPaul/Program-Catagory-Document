select 
  name
from 
  Employee as t1 join
  (select 
    managerId
  from 
    Employee
  group by managerId
  having count(managerId) >= 5) as t2
  on t1.id = t2.managerId;
