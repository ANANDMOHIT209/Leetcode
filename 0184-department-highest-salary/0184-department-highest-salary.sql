# Write your MySQL query statement below

SELECT d.name as Department, e.name as Employee, e.salary as Salary
FROM Employee as e, Department as d
WHERE e.departmentId=d.id AND (e.departmentId,e.salary) IN
(SELECT departmentID,MAX(salary) FROM Employee GROUP BY departmentID);