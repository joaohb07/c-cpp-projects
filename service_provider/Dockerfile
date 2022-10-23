# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /service_provider
# Setting the working directory
WORKDIR /service_provider/
# Compile cpp code with gcc
RUN gcc -o service_provider service_provider.cpp
# Execute always the compiled version
CMD ["./service_provider"]