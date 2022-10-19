# C Exercise

> ***Ideal weight***
---

## Ideal weight program

Make a program that takes the height (in meters) and gender (Male or Female) of a person and
to calculate and display your ideal weight using the following formulas:

```bash
Male (72.7 * height) - 58
Female (62.1 * height) - 44.7
```

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
    gcc if_ideal_weight.cpp -o execute -lm
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
  float height, weight;
  char gender;
  printf("\nType height in meters:\n");
  scanf(" %f",&height);

  do{
    printf("\nType gender M or F:\n");
    scanf(" %c",&gender);

    switch (gender)
    {
    case 'M':
      weight = (72.7 * height) - 58;
      printf("\nIdeal weight:\n%.3f\n",weight);
      return 0;
      break;

    case 'F':
      weight = (62.1 * height) - 44.7;
      printf("\nIdeal weight:\n%.3f\n",weight);
      return 0;
      break;
    
    default:
      printf("\nInvalid Gender %c (type M or F)\n", gender);
      break;
    }
  }while(1);
}
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
