# C Exercise

> ***Data Collection***
---

## Data Collection program

A survey was carried out among fifteen inhabitants of a region. These data were collected from each inhabitant in order: age, sex (M or M), salary and number of children. Make a subroutine that reads this data by storing it in arrays. Create subroutines that receive these vectors as parameters and return the average salary among the inhabitants, the youngest and oldest age of the group and the number of women with three children who receive up to `$500.00`. Use a subroutine for each calculation.

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/data_collection
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc data_collection.c -o execute -lm
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

void le_dados();
float media();
int menor();
int maior();
int qtdade();

int vetorIdade[15];
char vetorSexo[15];
float vetorSalario[15];
int vetorFilhos[15];

int main(void)
{

    le_dados();
    printf("\nAverage Salary:%.2f |", media());
    printf("Youngest Age: %d |", menor());
    printf("Oldest Age: %d\n", maior());
    printf("Womens with more than 3 children that receive up to $500,00: %d\n", qtdade());
    return 0;
}

void le_dados(){
    for (int i = 0; i < 15; i++){
        printf("\nType the age of n. %d\n", i);
        scanf("%d", &vetorIdade[i]);
        
        printf("\nType the gender of n. %d\n", i);
        scanf("%s", &vetorSexo[i]);
        
        printf("\nType the income of n. %d\n", i);
        scanf("%f", &vetorSalario[i]);
        
        printf("\nType the number of sons of n. %d\n", i);
        scanf("%d", &vetorFilhos[i]);
    }
}

float media(){
    float sp = 0;
    for (int i = 0; i < 15; i++){
        sp += vetorSalario[i];
    }
    return (sp/15);
}

int menor(){
    int menor = vetorIdade[0];
    for (int i = 0; i < 15; i++){
        if(vetorIdade[i]<=menor){
            menor = vetorIdade[i];
        }
    }
    return menor;
}

int maior(){
    int maior = 0;
    for (int i = 0; i < 15; i++){
        if(vetorIdade[i]>=maior){
            maior = vetorIdade[i];
        }
    }
    return maior;
}

int qtdade(){
    int mulheres = 0;
    
    for(int i = 0; i < 15; i++){
        if(vetorSexo[i]=='M' && vetorFilhos[i] == 3 && vetorSalario[i] <= 500){
            mulheres++;
        }
    }
    
    return mulheres;
}

```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
