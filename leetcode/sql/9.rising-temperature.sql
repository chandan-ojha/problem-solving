#solution

select w2.id 
from Weather w1
JOIN Weather W2 
ON DATEDIFF(w2.recordDate, w1.recordDate) =1  
where w2.temperature > w1.temperature;