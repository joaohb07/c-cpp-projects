# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /discount_calculation
# Setting the working directory
WORKDIR /discount_calculation/
# Compile cpp code with gcc
RUN gcc -o discount_calculation discount_calculation.cpp
# Execute always the compiled version
CMD ["./discount_calculation"]