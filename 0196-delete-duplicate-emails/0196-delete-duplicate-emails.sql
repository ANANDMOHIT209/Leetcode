# Write your MySQL query statement below
DELETE A FROM Person AS A,Person as B WHERE A.email=B.email AND A.id>B.id;