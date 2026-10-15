(
    select l.name, l.customers_number
    from lawyers as l
    where
        l.customers_number = (
            select max(customers_number)
            from lawyers
        )
        or l.customers_number = (
            select min(customers_number)
            from lawyers
        )
    order by customers_number desc
)
union all
select 'Average', round(avg(customers_number))
from lawyers;