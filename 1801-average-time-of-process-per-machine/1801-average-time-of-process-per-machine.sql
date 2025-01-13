# Write your MySQL query statement below
SELECT 
    machine_id,
    ROUND(AVG(end_time - start_time), 3) AS processing_time
FROM (
    SELECT 
        A1.machine_id,
        A1.process_id,
        MAX(CASE WHEN A1.activity_type = 'start' THEN A1.timestamp END) AS start_time,
        MAX(CASE WHEN A2.activity_type = 'end' THEN A2.timestamp END) AS end_time
    FROM Activity A1
    JOIN Activity A2 
        ON A1.machine_id = A2.machine_id 
        AND A1.process_id = A2.process_id
    WHERE A1.activity_type = 'start' 
    AND A2.activity_type = 'end'
    GROUP BY A1.machine_id, A1.process_id
) T
GROUP BY machine_id;
