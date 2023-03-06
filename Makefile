SRC_DIR = ./src
BUILD_DIR = ./build
INCLUDIR_DIR = ./include

PROG_SOURCES = $(wildcard  $(SRC_DIR)/*)

CXX = g++
CXXFLAGS = -Iinclude
RM = rm -f

OBJECTS := $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(PROG_SOURCES))

.PHONY: all clean main

all: $(OBJECTS)
	$(CXX) $(OBJECTS) -o main

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<
	
clean:
	@echo Removing build files
	@$(RM) $(OBJECTS)
	@$(RM) main