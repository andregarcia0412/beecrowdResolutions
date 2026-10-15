select c.id, c.name
from customers c
    left join locations l on c.id = l.id_customers
where
    l.id_customers is null
order by c.id;