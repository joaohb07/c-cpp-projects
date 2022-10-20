# C Exercise

> ***Populacional research***
---

## Populacional research program

The city hall of a city carried out a survey among its inhabitants, collecting data on wages and the number of children. The municipality wants to know:

- the average salary of the population;
- the average number of children;
- the highest salary;
- the percentage of people with salaries up to R$150.00.

The end of data reading will occur with the entry of a negative salary.

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/pop_research
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc pop_research.cpp -o execute -lm
    ```

2. Run the `execute` compiled file:

    ```bash
    ./execute
    ```

### Run with Docker

With [**Docker**](https://www.docker.com/) installed run the following commands:

1. Build the container and images:

    ```bash
    docker build -t gcc-docker .
    ```

2. Run the container with the built image `gcc-docker:latest`:

    ```bash
    docker run -it gcc-docker:latest
    ```

## Code

>Code in C.

```C
#include <stdio.h>
#include <stdlib.h>


int main(){

    float salary, sons, sons_final, salary_final, parents, num_salary_cq, mCQ = 0, greatest_salary = 0, m_son = 0, m_salary=0;

    int verifica = 0;


    while(verifica==0)
        {
            printf("\nType the salary:\n");
            scanf("%f", &salary);
            if(salary>0)
                {
                    printf("\nType the number of sons:\n");
                    scanf("%f", &sons);
                    parents++;
                    salary_final = salary_final + salary;
                    sons_final = sons_final + sons;
                    if(salary>greatest_salary)
                        {
                            greatest_salary = salary;
                        }
                    if(salary<=150)
                        {
                            num_salary_cq++;
                        }
                }
            else{
                verifica=1;
            }
        }
      m_salary = salary_final/parents;
      m_son = sons_final/parents;
      mCQ = (100*num_salary_cq)/parents;

      printf("\nMean salary:\n%f\nMean sons:\n%f\nBiggest salary:\n%f\n$150,00 salary percentage:\n%f\n",m_salary,m_son,greatest_salary,mCQ);
}

```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
