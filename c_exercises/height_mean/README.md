# C Exercise

> ***Populacional research***
---

## Populacional research program

Write a program that takes the **age** and **height** of several people and calculates and displays the average height of people over 50. To end data entry, enter age less than or equal to zero.

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/height_mean
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc height_mean.cpp -o execute -lm
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

    float age=0, mean_height = 0, height = 0, people_number= 0, heightCQ = 0;
    int verify = 0;


    while(verify == 0)
    {   
        printf("\nType the age (-1 to exit):\n");
        scanf("%f", &age);
        if(age > 0)
            {
                printf("\nType the height:\n");
                scanf("%f", &height);

                if(age>50){
                    heightCQ = heightCQ + height;
                    people_number++;
                }
            }

        else{
            verify = 1;
        }
    }

    mean_height = heightCQ/people_number;
    printf("\nMean height:\n%f\n",mean_height);

    return 0;
}
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
