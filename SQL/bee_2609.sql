select C.name, sum(P.amount)
from products P
    join categories C on C.id = P.id_categories
group by
    C.name;