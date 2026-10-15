select c.name, r.rentals_date
from customers c
    join rentals r on c.id = r.id_customers
where
    date_part('month', r.rentals_date) = 9;