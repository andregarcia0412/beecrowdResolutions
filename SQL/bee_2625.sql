select concat(
        substring(np.cpf, 1, 3), '.', substring(np.cpf, 4, 3), '.', substring(np.cpf, 7, 3), '-', substring(np.cpf, 10, 2)
    ) CPF
from
    customers c
    join natural_person np on c.id = np.id_customers