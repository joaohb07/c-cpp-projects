# C Project

> ***Service Provider***
---

## Service Provider program

A service provider company stores information about the services provided. It is known that this company performs a maximum of three services daily. It is in the interest of the management of this company to maintain a monthly history (30 days) on the services provided.

### Structures

The company performs four types of services:

- Painting;
- Gardening;
- Cleaning;
- Reforms in general.

Each of the four types of services must be registered by the user using a structure with service code:integer and ***description***:literal[20]. Use a four-position array capable of storing information for each of the four types of services.

In addition, each developed service must be registered using a structure with the following information: ***service code***:integer, ***service number***:integer, **service value**: $$,$$ , and ***customer code***:integer.

### Service matrix

Use a matrix capable of storing in each position all the information regarding a service provided. Each row represents a day of the month and each column represents a service performed (maximum 3). In this way, consider the matrix with dimension ***30 x 3***.

### Inicialization

Initialize, before the user enters entries, **each piece of information** (service code, service number, service value and customer code) of **each position** in the services matrix with the value 0 (zero). Also initialize each information of each position of the vector of types of services, being that the code of the service must be initialized with 0 (zero) and the description of the service must be initialized with "" (empty).

### Main Menu

1. Register one of the four types of services
2. Register a service provided on a given day
3. Show all services provided on a given day
4. Show all services provided within a value range
5. Show the general report (separated by day), which also displays the description of the type of service
6. End of execution

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/service_provider
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `c` file:

    ```bash
    gcc service_provider.cpp -o execute -lm
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
