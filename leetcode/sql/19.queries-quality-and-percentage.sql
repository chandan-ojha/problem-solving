#solution

select query_name,
round(avg(rating/position), 2) AS quality,
round(sum(rating < 3)/count(*)*100, 2) AS poor_query_percentage
from Queries
where query_name is not null
group by query_name
order by 2 desc;
