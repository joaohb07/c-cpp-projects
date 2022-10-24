# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /show_biggest
# Setting the working directory
WORKDIR /show_biggest/
# Compile cpp code with gcc
RUN gcc -o show_biggest show_biggest.c
# Execute always the compiled version
CMD ["./show_biggest"]