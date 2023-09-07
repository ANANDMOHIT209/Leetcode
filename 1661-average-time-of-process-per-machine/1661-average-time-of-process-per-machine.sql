# Write your MySQL query statement below
SELECT a.machine_id,ROUND( (SELECT AVG(a1.timestamp) FROM
                          Activity as a1 WHERE a1.activity_type='end' AND a1.machine_id=a.machine_id) - 
                          (SELECT AVG(a2.timestamp) FROM
                          Activity as a2 WHERE a2.activity_type='start' AND a2.machine_id=a.machine_id) ,3) AS processing_time FROM Activity as a GROUP BY a.machine_id;