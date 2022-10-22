# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /raise_price
# Setting the working directory
WORKDIR /raise_price/
# Compile cpp code with gcc
RUN gcc -o raise_price raise_price.c
# Execute always the compiled version
CMD ["./raise_price"]