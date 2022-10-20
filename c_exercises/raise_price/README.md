# C Exercise

> ***Raise Price***
---

## Raise Price program

Make a program that receives the price, category (1, 2 or 3) and status (R or N) of a product. Calculate the value of the price increase and using Table 2, recalculate for the cases presented, if the increase is not outside the scope of the table, the calculated value must be taken. Show the increase amount and the final amount.

| Price                | Category      | Raise %        |
| -------------        |:-------------:|:-------------:|
| Lesser than `$25,00` | 1             | 5%            |
| Lesser than `$25,00` | 2             | 8%            |
| Lesser than `$25,00` | 3             | 10%           |
| Greater than `$25,00`| 1             | 12%           |
| Greater than `$25,00`| 2             | 15%           |
| Greater than `$25,00`| 3             | 18%           |

| Raise         | Situation     | Recalculated raise |
| ------------- |:-------------:|:-------------:     |
| Until `$0,99` | R             | `$1,00`            |
| Until `$0,99` | N             | `$2,00`            |
| Above `$99,00`| R             | `$10,00`           |
| Above `$99,00`| N             | `$20,00`           |

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/raise_price
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc raise_price.cpp -o execute -lm
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
 float price, raise, X, final;
 int category;
 char situation;
 
 printf("\nType the product price:\n");
 scanf(" %f", &price);
 while(category < 1 || category > 3){
  printf("\nType the product category ( 1, 2 or 3 ):\n");
  scanf(" %d", &category);
 }
 while(situation != 'R' && situation != 'N'){
  printf("\nType the product situation ( R or N ):\n");
  scanf(" %c", &situation);
 }
 
 if (price <= 25.00){
  switch(category)
  {
   case 1:
    X = price * (5.0/100);
    raise = 0.0;
    if (X <= 0.99 && situation == 'R'){
     raise = 1.00;
    } else if(X <= 0.99 && situation == 'N') {
     raise = 2.00;
    } else if(X > 99.00 && situation == 'R'){
     raise = 10.00;
    } else if(X > 99.00 && situation == 'N'){
     raise = 20.00;
    }else{
     raise = X;
    }
    final = price + raise;
    break;
   case 2:
    X = price * (8.0/100);
    raise = 0.0;
    if (X <= 0.99 && situation == 'R'){
     raise = 1.00;
    } else if(X <= 0.99 && situation == 'N') {
     raise = 2.00;
    } else if(X > 99.00 && situation == 'R'){
     raise = 10.00;
    } else if(X > 99.00 && situation == 'N'){
     raise = 20.00;
    }else{
     raise = X;
    }
    final= price + raise;
    break;
   case 3:
    X = price * (10.0/100);
    raise = 0.0;
    if (X <= 0.99 && situation == 'R'){
     raise = 1.00;
    } else if(X <= 0.99 && situation == 'N') {
     raise = 2.00;
    } else if(X > 99.00 && situation == 'R'){
     raise = 10.00;
    } else if(X > 99.00 && situation == 'N'){
     raise = 20.00;
    }else{
     raise = X;
    }
    final= price + raise;
    break;
  }
 } else {
  switch(category)
  {
   case 1:
    X = price * (12.0/100);
    raise = 0.0;
    if (X <= 0.99 && situation == 'R'){
     raise = 1.00;
    } else if(X <= 0.99 && situation == 'N') {
     raise = 2.00;
    } else if(X > 99.00 && situation == 'R'){
     raise = 10.00;
    } else if(X > 99.00 && situation == 'N'){
     raise = 20.00;
    }else{
     raise = X;
    }
    final= price + raise;
    break;
   case 2:
    X = price * (15.0/100);
    raise = 0.0;
    if (X <= 0.99 && situation == 'R'){
     raise = 1.00;
    } else if(X <= 0.99 && situation == 'N') {
     raise = 2.00;
    } else if(X > 99.00 && situation == 'R'){
     raise = 10.00;
    } else if(X > 99.00 && situation == 'N'){
     raise = 20.00;
    }else{
     raise = X;
    }
    final= price + raise;
    break;
   case 3:
    X = price * (18.0/100);
    raise = 0.0;
    if (X <= 0.99 && situation == 'R'){
     raise = 1.00;
    } else if(X <= 0.99 && situation == 'N') {
     raise = 2.00;
    } else if(X > 99.00 && situation == 'R'){
     raise = 10.00;
    } else if(X > 99.00 && situation == 'N'){
     raise = 20.00;
    }else{
     raise = X;
    }
    final= price + raise;
    break;
  }
 }

 printf("\nRaise:\n%.2f\nFinal Price:\n%.2f\n", raise, final);
}

```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
