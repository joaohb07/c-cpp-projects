# C Exercise

> ***Show Biggest***
---

## Show Biggest program

Make a program that receives 3 numbers and returns the biggest one.

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/show_biggest
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc show_biggest.cpp -o execute -lm
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
 int n1,n2,n3, biggest;
 
 printf("\nType the first number: \n");
 scanf(" %d", &n1);
 printf("\nType the second number: \n");
 scanf(" %d", &n2);
 printf("\nType the third number: \n");
 scanf(" %d", &n3);
 
 if (n1 > n2 && n1 > n3){
  biggest = n1;
 } else if ( n2 > n1 && n2 > n3){
  biggest = n2;
 } else if ( n3 > n1 && n3 > n2){
  biggest = n3;
 }
 
 printf("\nBiggest:\n%d\n", biggest);
}

```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
