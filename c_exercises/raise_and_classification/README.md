# C Exercise

> ***Raise and Classification***
---

## Raise and Classification program

Write a program that receives the price of a product, calculates and displays, according to the following tables, the new price and classification.

| Price                | Percentual raise|
| -------------        |:-------------:  |
| Until `$49,99`       | 5%              |
| `$50,00` to `$99,99` | 10%             |
| Above `$100,00`      | 15%             |

| New Price             | Classification |
| -------------         |:-------------: |
| Until `$79,99`        | Cheap          |
| `$80,00` to `$199,99` | Normal         |
| `$120,00` to `$199,99`| Expensive      |
| Above `$200,00`       | Too expensive  |

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/raise_and_classification
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc raise_and_classification.cpp -o execute -lm
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
 float price, final;
 
 printf("\nType the current product price:\n");
 scanf("%f", &price);
 
 if (price <= 49.99){
  final = price + (price * 5/100);
 } else if (price >= 50.00 && price <= 99.99){
  final = price + (price * 10/100);
 } else if (price >= 100.00){
  final = price + (price * 15/100);
 }
 
 printf("\nNew product price:\n%.2f\n", final);
 
 if (final <= 79.99){
  printf("\nPrice is: Cheap\n");
 } else if (final >= 80.00 && final <= 119.99){
  printf("\nPrice is: Normal\n");
 } else if (final >= 120.00 && final <=199.99){
  printf("\nPrice is: Expensive\n");
 } else if (final >= 200.00){
  printf("\nPrice is: Too Expensive\n");
 }
 
}


```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
