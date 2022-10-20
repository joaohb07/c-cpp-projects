# Use the default image provided by Docker Hub for GCC.
FROM gcc:4.9
# Copy our cpp file directly into a subdirectory inside the docker environment
COPY ./ /pop_research
# Setting the working directory
WORKDIR /pop_research/
# Compile cpp code with gcc
RUN gcc -o pop_research pop_research.cpp
# Execute always the compiled version
CMD ["./pop_research"]