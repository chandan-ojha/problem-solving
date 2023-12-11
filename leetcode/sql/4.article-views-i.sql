#solution

select author_id as id from Views 
where author_id = viewer_id 
GROUP BY author_id
HAVING COUNT(article_id )>0
order by author_id;