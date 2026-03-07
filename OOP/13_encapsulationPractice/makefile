# Force the use of Windows CMD to avoid "Error 2"
SHELL = cmd.exe

CXX = g++
CXXFLAGS = -Wall -std=c++14
DEPFLAGS = -MMD -MP

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
TARGET = $(BIN_DIR)\main.exe

# Use backslashes for Windows path compatibility in shell commands
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))
DEPS = $(OBJS:.o=.d)

all: setup $(TARGET)

# Use Windows "if not exist" syntax
setup:
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)

-include $(DEPS)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule for compiling
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c $< -o $@

# Windows-specific clean
clean:
	@if exist $(OBJ_DIR) rmdir /s /q $(OBJ_DIR)
	@if exist $(BIN_DIR) rmdir /s /q $(BIN_DIR)

