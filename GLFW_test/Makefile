# Define the compiler
CXX = g++

# Define the compiler flags
CXXFLAGS = -Wall -Wextra -std=c++11

# Define the sources and headers
SRCS = main.cpp glad.c

# Define the object files
OBJS = main.o

# Define the executable name
TARGET = GLFW_test.exe

LIBS = -lglfw -lGLEW -lGL

# Default target to build the project
all: $(TARGET)

# Rule to link the object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o $(LIBS)

# Rule to compile the source files into object files
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

# Clean rule to remove object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean
