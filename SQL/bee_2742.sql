select lr.name, round(lr.omega * 1.618, 3) as "Fator N"
from
    life_registry lr
    join dimensions d on d.id = lr.dimensions_id
where
    lr.name like 'Richard%'
    and (
        d.name like 'C875'
        or d.name like 'C774'
    )
order by lr.omega;