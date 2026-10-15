select prod.name, prov.name, prod.price
from
    products prod
    join providers prov on prod.id_providers = prov.id
    join categories cat on prod.id_categories = cat.id
where
    prod.price > 1000
    and cat.name like 'Super Luxury'