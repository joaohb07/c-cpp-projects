# C Exercise

> ***Personal Loan***
---

## Personal Loan program

Make a program that receives the source code and shows its origin. The origin follows the table below.

| Code               | Origin |
| -------------      |:-------------:|
| 1                  | South     |
| 2                  | North     |
| 3                  | East     |
| 4                  | West     |
| 5 or 6             | Northwest     |
| 7, 8 or 9          | Southeast     |
| 10 to 20           | Centerwest     |
| 21 to 30           | Northeast     |

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/product_where_from
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc product_where_from.cpp -o execute -lm
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
 int code;
 
 while(code < 1 || code > 30){
  printf("\nType location code (1 to 30):\n");
  scanf("%d",&code);
  if(code < 1 || code > 30)
   printf("\nInvalid code!\n");
 }
 
 switch(code)
 {
  case 1:
   printf("\nSouth\n");
   break;
  case 2:
   printf("\nNorth\n");
   break;
  case 3:
   printf("\nEast\n");
   break;
  case 4:
   printf("\nWest\n");
   break;
  default:
   if (code == 5 || code == 6)
    printf("\nNorthwest\n");
   else if(code == 7 || code == 8 || code == 9)
    printf("\nSoutheast\n");
   else if(code >= 10 && code <= 20)
    printf("\nCenterwest\n");
   else if(code >= 21 && code <=30) 
    printf("\nNortheast\n");
 }
}

```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
