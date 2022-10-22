# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /tic_tac_toe
# Setting the working directory
WORKDIR /tic_tac_toe/
# Compile cpp code with gcc
RUN gcc -o tic_tac_toe tic_tac_toe.cpp
# Execute always the compiled version
CMD ["./tic_tac_toe"]