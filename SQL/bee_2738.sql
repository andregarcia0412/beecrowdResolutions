select c.name, round(
        (
            (
                s.math * 2 + s.specific * 3 + s.project_plan * 5
            ) / 10.0
        ), 2
    ) as avg
from candidate c
    join score s on s.candidate_id = c.id
order by avg desc