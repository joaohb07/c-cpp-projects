# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /operations
# Setting the working directory
WORKDIR /operations/
# Compile cpp code with gcc
RUN gcc -o operations operations.cpp
# Execute always the compiled version
CMD ["./operations"]