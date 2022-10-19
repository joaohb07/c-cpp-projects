# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /if_ideal_weight
# Setting the working directory
WORKDIR /if_ideal_weight/
# Compile cpp code with gcc
RUN gcc -o if_ideal_weight if_ideal_weight.cpp
# Execute always the compiled version
CMD ["./if_ideal_weight"]