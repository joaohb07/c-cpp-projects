# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /product_where_from
# Setting the working directory
WORKDIR /product_where_from/
# Compile cpp code with gcc
RUN gcc -o product_where_from product_where_from.c
# Execute always the compiled version
CMD ["./product_where_from"]