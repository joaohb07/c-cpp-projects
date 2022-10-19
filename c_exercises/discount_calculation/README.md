# C Exercise

> ***Discount Calculation***
---

## Discount Calculation program

Make a program that receives:

- Purchased product code;
- Quantity purchased of a product;
- Following the table, calculate and display in order:
  - Unit price of the product purchased following the table;
  - Total price of the note;
  - Discount amount, following the table 2 and applying it to the total price of the note
  - final price of the bill after the discount
  - **Table One**:
  
    | Code          | Price |
    | ------------- |:-------------:|
    | 1 to 10       | $ 10,00    |
    | 11 to 20      | $ 15,00    |
    | 21 to 30      | $ 20,00    |
    | 31 to 40      | $ 30,00    |
  - **Table Two**:

    | Note total price     | Discount (%) |
    | -------------              |:-------------:|
    | Until `$ 249,99`                  | 5%     |
    | Between `$ 250,00` and `$ 499,99` | 10%    |
    | Above `$ 500,00`                  | 15%    |

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/discount_calculation
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc discount_calculation.cpp -o execute -lm
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
 int product_code, product_amount;
 float unit_price, total_price,final_price, discount;
 while(product_code < 1 || product_code > 40){
  printf("\nProduct Code (1 to 40):\n");
  scanf("%d", &product_code);
 }
 printf("\nProduct Amount:\n");
 scanf("%d", &product_amount);
 
 
 if (product_code >=1 && product_code <=10){
  unit_price = 10.00;
  total_price = product_amount * 10.00;
   if (total_price <= 249.99){
    discount = total_price * 5/100;
    final_price = total_price -  discount;
   }
   else if (total_price >= 250.00 || total_price <= 499.99){
    discount = total_price * 10/100;
    final_price = total_price -  discount;
   }
   else if (total_price >= 500.00){
    discount = total_price * 15/100;
    final_price = total_price -  discount;
   }
   
 } else if (product_code >=11 && product_code <=20){
  unit_price = 15.00;
  total_price = product_amount * 15.00;
   if (total_price <= 249.99){
    discount = total_price * 5/100;
    final_price = total_price -  discount;
   }
   else if (total_price >= 250.00 && total_price <= 499.99){
    discount = total_price * 10/100;
    final_price = total_price -  discount;
   }
   else if (total_price >= 500.00){
    discount = total_price * 15/100;
    final_price = total_price -  discount;
   }
 } else if (product_code >=  21 && product_code <= 30 ){
  unit_price = 20.00;
  total_price = product_amount * 20.00;
   if (total_price <= 249.99){
    discount = total_price * 5/100;
    final_price = total_price -  discount;
   }
   else if (total_price >= 250.00 && total_price <= 499.99){
    discount = total_price * 10/100;
    final_price = total_price -  discount;
   }
   else if (total_price >= 500.00){
    discount = total_price * 15/100;
    final_price = total_price -  discount;
   }
 } else if (product_code >= 31 && product_code <= 40){
  unit_price = 30.00;
  total_price = product_amount * 30.00;
   if (total_price <= 249.99){
    discount = total_price * 5/100;
    final_price = total_price -  discount;
   }
   else if (total_price >= 250.00 && total_price <= 499.99){
    discount = total_price * 10/100;
    final_price = total_price -  discount;
   }
   else if (total_price >= 500.00){
    discount = total_price * 15/100;
    final_price = total_price -  discount;
   }
 }
   
 printf("\nUnit Price:\n$%.2f", unit_price);
 printf("\nTotal Price:\n$%.2f", total_price);
 printf("\nDiscount:\n$%.2f", discount);
 printf("\nFinal Price:\n$%.2f\n", final_price);
 
}

```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
