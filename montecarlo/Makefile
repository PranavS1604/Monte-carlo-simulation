CXX = g++
CXXFLAGS = -Wall -g

# Target executable
TARGET = montecarlo

# Source files
SRCS = main_program.cpp implementation.cpp

# Object files
OBJS = main_program.o implementation.o

# Header files
HDRS = header.hpp

# Build rule
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile rule for main program
main_program.o: main_program.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c main_program.cpp

# Compile rule for implementation
implementation.o: implementation.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c implementation.cpp

# Clean rule to remove binaries and object files
clean:
	rm -f $(TARGET) *.o
