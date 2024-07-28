# Definición de variables
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -Iinclude

# Directorios
SRC_DIR = src
MODEL_SRC_DIR = $(SRC_DIR)/model
OBJ_DIR = build
MODEL_OBJ_DIR = $(OBJ_DIR)/model
INCLUDE_DIR = include
MODEL_INCLUDE_DIR = $(INCLUDE_DIR)/model

# Archivos fuente y objetos
SRCS = $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(MODEL_SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))
OBJS := $(patsubst $(MODEL_SRC_DIR)/%.cpp, $(MODEL_OBJ_DIR)/%.o, $(OBJS))

# Ejecutable
TARGET = engine_exec

# Reglas
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(MODEL_OBJ_DIR)/%.o: $(MODEL_SRC_DIR)/%.cpp | $(MODEL_OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(MODEL_OBJ_DIR):
	@mkdir -p $(MODEL_OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re

