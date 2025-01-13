# Write your MySQL query statement below
select a1.machine_id , Round(AVG(a2.timestamp - a1.timestamp),3) as processing_time 
from Activity a1 inner join  Activity a2 on a1.machine_id = a2.machine_id And a1.process_id = a2.process_id 
and a1.timestamp < a2.timestamp
Group by machine_id