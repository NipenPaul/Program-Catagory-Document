/* Write your PL/SQL query statement below */
select c.name as "Customers"
from Customers c
where c.id not in(
  select customerId from orders
);
