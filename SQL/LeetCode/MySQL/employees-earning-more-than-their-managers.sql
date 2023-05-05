select a.Name As 'Employee'
from Employee As a, Employee As b
where a.ManagerId = b.Id and a.Salary > b.Salary;
