select prod.name
from products prod
    join providers prov on prod.id_providers = prov.id
where
    prod.amount >= 10
    and prod.amount <= 20
    and prov.name like 'P%'