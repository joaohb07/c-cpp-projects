# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /data_collection
# Setting the working directory
WORKDIR /data_collection/
# Compile cpp code with gcc
RUN gcc -o data_collection data_collection.cpp
# Execute always the compiled version
CMD ["./data_collection"]