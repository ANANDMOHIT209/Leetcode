# Write your MySQL query statement below
# select A.name as Customers from
# Customers as A
# where A.id not in (select B.customerId from Orders as B);

SELECT A.name as Customers FROM
Customers as A LEFT JOIN Orders as B
ON A.id=B.customerId WHERE B.customerId is NULL;