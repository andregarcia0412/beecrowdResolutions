select p.id, p.name
from products as p
    join categories as c on c.id = p.id_categories
where
    c.name like 'super%';