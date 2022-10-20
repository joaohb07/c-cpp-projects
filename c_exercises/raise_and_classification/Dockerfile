# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /raise_and_classification
# Setting the working directory
WORKDIR /raise_and_classification/
# Compile cpp code with gcc
RUN gcc -o raise_and_classification raise_and_classification.cpp
# Execute always the compiled version
CMD ["./raise_and_classification"]