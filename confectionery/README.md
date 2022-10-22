# C Project

> ***Confectionery***
---

## Confectionery program

The confectionery “Confeita & Ria” hired you to program a new weekly ordering system. Since their budget is incredibly low, briefly consider that:

- There are only two types of products for sale: cakes and juices;
- An order consists of 1 to 2 the same or different products;
- There is space to store only 2 products PER ORDER;
- There is space to register only 3 requests PER DAY;
- There is space to store orders only for 7 days (Sun to Sat).

### Products

Every product has the following information in common:

- value: decimal
- In addition, each product may have unique characteristics, that is, that only it implements.

**Cake** is a product with:

- **Flavor**
  - *Orange* (constant: 1);
  - *Apple* (constant: 2);
- **Cover**:char (may or may not have cover) ('s'/'n').

**Juice** is a product with:

- **Flavor**
  - *Orange* (constant: 1);
  - *Apple* (constant: 2);
  - *Watermelon* (constant: 3);

### Orders

Each order stores the following information:

- **order_id**:integer (auto-increment) (starting with 1);
- **qty_products**:integer (stores the quantity of products in this order)
- **producttype**:producttype[2] (stores the type of each inserted product);
- **products**:product[2] (each order can have up to 2 products);
- **total_value**:decimal .

### Storage

Used an array of orders of size `[7][3]` that will be responsible for storing your orders. Each row corresponds to a day of the week and each column corresponds to one of the maximum 3 orders that can be made on each day.

In addition to the matrix, it is necessary to use a vector of indices of size `[7]` that will be responsible for storing the number of orders on each day of the week.

Example: Position 0 of the vector stores the number of orders that were registered in row 0 of the matrix (in this case on Monday).

### Main Menu

1. Register order
2. View total amount of all purchases
3. View largest order made
4. View products ordered by week day
5. Exit

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/confectionery
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `c` file:

    ```bash
    gcc confectionery.c -o execute -lm
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

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
