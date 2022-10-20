# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /height_mean
# Setting the working directory
WORKDIR /height_mean/
# Compile cpp code with gcc
RUN gcc -o height_mean height_mean.cpp
# Execute always the compiled version
CMD ["./height_mean"]