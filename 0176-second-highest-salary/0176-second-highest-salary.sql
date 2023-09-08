# Write your MySQL query statement below

# Method-1

SELECT MAX(salary) AS SecondHighestSalary
FROM Employee WHERE salary <
(SELECT MAX(salary) FROM Employee)