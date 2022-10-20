# C Exercise

> ***Sum of Inverses***
---

## Sum of Inverses program

Write a program that reads a positive integer value N, calculates and displays the value of the following sum:

```bash
Sum = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
```

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/sum_of_inverses
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc sum_of_inverses.cpp -o execute -lm
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

int main (void){
 int number;
 float i, sum_of_inverses;
 printf("\nType a positive integer:\n ");
 scanf(" %d", &number);
 sum_of_inverses = 0;
 
 for (i=1; i <= number;i++){
  
  float result = 1/i;
  sum_of_inverses = sum_of_inverses + result;
 }
 
 printf("\nSum of Inverses = %.4f\n", sum_of_inverses);
}


```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
