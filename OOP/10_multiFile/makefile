CXX = g++
CXXFLAGS = -Wall -std=c++14

# paths
SRC_DIR = src
BIN_DIR = bin

# target is now inside bin folder
TARGET = $(BIN_DIR)/main.exe

# object files
OBJS = $(SRC_DIR)/main.o $(SRC_DIR)/Player.o

# Link the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# compile main.cpp
$(SRC_DIR)/main.o: $(SRC_DIR)/main.cpp $(SRC_DIR)/Player.h
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/main.cpp -o $(SRC_DIR)/main.o

#compile Player.cpp
$(SRC_DIR)/Player.o: $(SRC_DIR)/Player.cpp $(SRC_DIR)/Player.h
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/Player.cpp -o $(SRC_DIR)/Player.o

clean:
	del /f src\*.o bin\final.exe

