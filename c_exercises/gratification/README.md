# C Exercise

> ***Gratification***
---

## Gratification program

A company decided to give a Christmas bonus to its employees, based on the number of overtime hours and the number of hours the employee was absent from work. The prize amount is obtained by querying the following table. Show the final gratuity.

```bash
H = ( number of overtime hours ) - ( 3/4 * (number of absent hours) )
```

| H                 | Gratificaiton   |
| -------------     |:-------------:  |
| Until 600         | `$100,00`       |
| 601 to 1200       | `$200,00`       |
| 1201 to 1800      | `$300,00`       |
| 1801 to 2400      | `$400,00`       |
| Above 2400        | `$500,00`       |

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/gratification
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc gratification.cpp -o execute -lm
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
int main (void)
{
 int overtime, absent, H;
 
 printf("\nType overtime hours:\n");
 scanf("%d", &overtime);
 printf("\nType absent hours:\n");
 scanf("%d", &absent);
 
 H = overtime - ((3 * absent)/4);
 
 if (H <= 600)
  printf("\nGratification: $100.00\n");
 else if (H >= 601 && H <= 1200)
  printf("\nGratification: $200.00\n");
 else if (H >= 1201 && H <= 1800)
  printf("\nGratification: $300.00\n");
 else if (H >= 1801 && H <= 2400)
  printf("\nGratification: $400.00\n");
 else if (H >= 2400 )
  printf("\nGratification: $500.00\n");
}

```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
