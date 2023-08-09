# Write your MySQL query statement below

SELECT e.name,b.bonus FROM Employee as e LEFT OUTER JOIN Bonus as b ON e.empID=b.empID WHERE b.bonus<1000 OR b.bonus IS NULL;

# SELECT * FROM Employee as e LEFT OUTER JOIN Bonus as b ON e.empID=b.empID WHERE b.bonus<1000 OR b.bonus IS NULL;
