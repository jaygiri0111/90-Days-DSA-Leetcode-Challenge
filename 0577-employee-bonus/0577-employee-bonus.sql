# Write your MySQL query statement below
select e.name, ifnull(b.bonus,NULL) AS bonus
 from Employee e left join Bonus b on e.empId = b.empId 
 where bonus <1000 or bonus is null;