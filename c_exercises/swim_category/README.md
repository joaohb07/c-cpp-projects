# C Exercise

> ***Swimmer Category***
---

## Swimmer Category program

Make a program that takes the age of a swimmer and shows his category according to the following rules:

| Categories    | Age |
| ------------- |:-------------:|
| Children      | 5 to 7      |
| Young         | 8 to 10     |
| Teenager      | 11 to 15    |
| Adult         | 16 to 30    |
| Master        | above 30    |

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/swim_category
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc swim_category.cpp -o execute -lm
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

int main(void)
{
  int age;

  printf("\nType the age:\n");
  scanf("%int",&age);

  if(age >= 5 && age <= 7)
    printf("\nSwim Category:\nChildren\n");

  else if(age >= 8 && age <= 10)
    printf("\nSwim Category:\nYoung\n");
    
  else if(age >= 11 && age <= 15)
    printf("\nSwim Category:\nTeenager\n");
    
  else if(age >= 16 && age <= 30)
    printf("\nSwim Category:\nAdult\n");
    
  else if(age > 30)
    printf("\nSwim Category:\nMaster\n");

  else
    printf("\nToo Younger!\n");
}
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
