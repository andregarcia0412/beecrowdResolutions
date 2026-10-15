select team name
from (
        select position, concat('Podium: ', team) as team
        from league
        where
            position >= 1
            and position <= 3
        union all
        (
            select position, concat('Demoted: ', team) as team
            from league
            order by position desc
            limit 2
        )
    ) as sub
order by position asc;