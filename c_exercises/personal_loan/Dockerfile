# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /personal_loan
# Setting the working directory
WORKDIR /personal_loan/
# Compile cpp code with gcc
RUN gcc -o personal_loan personal_loan.cpp
# Execute always the compiled version
CMD ["./personal_loan"]