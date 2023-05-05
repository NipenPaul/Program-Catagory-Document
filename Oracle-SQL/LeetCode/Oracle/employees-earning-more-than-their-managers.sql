select a.name As "Employee"
from Employee a, Employee b
where a.managerId = b.id and a.salary > b.salary;
