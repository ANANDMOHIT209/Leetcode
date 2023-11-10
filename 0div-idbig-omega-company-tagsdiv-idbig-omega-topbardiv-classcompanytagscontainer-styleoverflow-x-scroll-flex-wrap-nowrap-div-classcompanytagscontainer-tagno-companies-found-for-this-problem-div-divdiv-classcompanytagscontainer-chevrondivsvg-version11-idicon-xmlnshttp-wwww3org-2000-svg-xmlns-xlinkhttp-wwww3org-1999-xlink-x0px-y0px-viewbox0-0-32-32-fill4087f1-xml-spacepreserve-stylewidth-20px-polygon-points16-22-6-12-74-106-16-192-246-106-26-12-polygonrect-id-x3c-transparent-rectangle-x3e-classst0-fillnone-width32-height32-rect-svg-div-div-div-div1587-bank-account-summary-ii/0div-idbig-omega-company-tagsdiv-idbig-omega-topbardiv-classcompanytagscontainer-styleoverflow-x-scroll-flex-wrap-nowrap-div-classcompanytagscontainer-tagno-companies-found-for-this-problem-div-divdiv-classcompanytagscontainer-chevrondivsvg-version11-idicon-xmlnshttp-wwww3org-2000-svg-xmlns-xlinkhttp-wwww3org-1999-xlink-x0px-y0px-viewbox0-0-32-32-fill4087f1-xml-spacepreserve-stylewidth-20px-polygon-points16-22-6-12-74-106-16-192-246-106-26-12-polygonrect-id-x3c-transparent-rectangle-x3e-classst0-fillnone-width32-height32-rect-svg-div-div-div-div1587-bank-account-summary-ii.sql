# Write your MySQL query statement below
SELECT u.name,sum(t.amount) AS balance FROM 
Users AS u JOIN Transactions as t
ON u.account = t.account 
GROUP by u.account
HAVING balance>10000;