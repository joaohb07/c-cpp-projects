# C Exercise

> ***Operations***
---

## Operations program

Write a program that takes two numbers and performs one of the operations listed below according to the user's choice. If an invalid option is entered, show the error message below and terminate program execution. The options are:

1. Average between the two numbers;
2. Difference from largest to smallest;
3. The product of the two numbers;

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/operations
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc operations.cpp -o execute -lm
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
 int num1, num2, result, options;
 
 printf("\nEnter the first number:\n");
 scanf("%d", &num1);
 
 printf("\nEnter the second number:\n");
 scanf("%d", &num2);
 
 while(options < 1 || options > 3){
  printf("\nChoose your option:\n(1) Average between them\n(2) Difference between the largest to smallest\n(3) The product of both of them\n");
  scanf("%d", &options);
 }
 
 switch(options)
 {
  case 1:
   result = (num1 + num2)/2;
   printf("\nAverage = %d\n", result);
   break;
  case 2 :
   if(num1 > num2)
    result = num1 - num2;
      else result = num2 - num1;
       printf("\nDifference = %d\n", result);
      break;
  case 3:
   result = num1 * num2;
   printf("\nProduct = %d\n", result);
   break;
  default:
   break;
   }
 
}

```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
