# Write your MySQL query statement below

SELECT s.student_id,s.student_name,s2.subject_name,
COUNT(e.subject_name ) AS attended_exams FROM Students as s CROSS JOIN
Subjects as s2 LEFT OUTER JOIN Examinations as e ON 
s.student_id=e.student_id and s2.subject_name=e.subject_name 
GROUP BY s.student_id,s.student_name,s2.subject_name
ORDER BY s.student_id,s2.subject_name;


# SELECT S.student_id, S.student_name, SUB.subject_name, 

# count(E.subject_name) AS attended_exams FROM Students S CROSS JOIN 

# Subjects SUB LEFT OUTER JOIN Examinations E ON 

# S.student_id = E.student_id AND SUB.subject_name = E.subject_name  

# GROUP BY S.student_id, S.student_name,SUB.subject_name ORDER BY 

# S.student_id, SUB.subject_name