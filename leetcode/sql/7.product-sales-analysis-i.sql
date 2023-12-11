#solution

SELECT PR.product_name,SA.year,SA.price
FROM Sales AS SA
LEFT JOIN Product AS PR ON SA.product_id = PR.product_id
GROUP BY SA.sale_id;