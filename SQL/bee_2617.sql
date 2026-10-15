select prod.name, prov.name
from products prod
    join providers prov on prod.id_providers = prov.id
where
    prov.name like 'Ajax SA';