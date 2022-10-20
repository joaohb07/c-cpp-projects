# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /sum_of_inverses
# Setting the working directory
WORKDIR /sum_of_inverses/
# Compile cpp code with gcc
RUN gcc -o sum_of_inverses sum_of_inverses.cpp
# Execute always the compiled version
CMD ["./sum_of_inverses"]