# C Exercise

> ***Tic Tac Toe***
---

## Tic Tac Toe program

Create a matrix to store the tic-tac-toe board. Write a program that allows you to interact with 2 players, reading their moves and displaying only the final situation on the board on the screen. The match will be held between the 2 players, and the program will only have the functions of:

- Read each player's move. Example: Play in position 1 1 (Line 1, Column 1);
- Check if the move is valid: we cannot play in a position where a piece has already been           placed or they are off the board, if the move is invalid it is necessary to print "Error\n";
- Check if the game is over, that is, if there is a winner (someone completed a row, column or diagonal) or if the entire board was filled and there were no winners (Tie). If there is a winner, it is necessary to print which player was the winner, on the bottom line, where the sequence of symbols that led to the victory is (Ex: "Line 0", "Column 2") and finally, the board situation .

## Execute

Clone `main` branch from [**c-cpp-projects**](https://github.com/joaohb07/c-cpp-projects).

Access this folder on terminal:

```bash
  cd c-cpp-projects/c_exercises/tic_tac_toe
```

### Run with GCC compiler

With [**GCC**](https://gcc.gnu.org/install/) compiler installed run the following commands:

1. Compile the `cpp` file:

    ```bash
    gcc tic_tac_toe.cpp -o execute -lm
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
