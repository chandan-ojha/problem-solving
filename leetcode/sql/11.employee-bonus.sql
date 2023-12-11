#solution

select employee.name, bonus.bonus 
from employee
left join bonus on bonus.empID = employee.empID
where bonus < 1000 or bonus is null