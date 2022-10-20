# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /gratification
# Setting the working directory
WORKDIR /gratification/
# Compile cpp code with gcc
RUN gcc -o gratification gratification.cpp
# Execute always the compiled version
CMD ["./gratification"]