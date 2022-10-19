# C Exercise

> ***Personal Loan***
---

## Personal Loan program

A bank will grant special credit to its customers according to the average balance in the last year. Write a program that receives the average balance of a customer and calculates and displays the credit amount, according to the following table.

| Mean Balance                  | Percentage |
| -------------                 |:-------------:|
| to `$199,99`                  | 10% of mean balance     |
| from `$200,00` to `$299,99`   | 20% of mean balance     |
| from `$300,00` to `$399,99`   | 25% of mean balance     |
| above `$400,00`               | 30% of mean balance     |

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/personal_loan
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc personal_loan.cpp -o execute -lm
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

int main (void)
{
 float balance, loan;
 printf("\nType client balance:\n");
 scanf("%f", &balance);
 
 if(balance <= 199.99){
  loan = balance * 10/100;
 }else if(balance >= 200.00 && balance <= 299.99){
  loan = balance * 20/100;
 }else if(balance >= 300.00 && balance <= 399.99){
  loan = balance * 25/100;
 }else if(balance >= 400.00){
  loan = balance * 30/100;
 }else{
  loan = 0;
 }
 printf("\nLoan:\n$%.2f\n", loan);
}


```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
