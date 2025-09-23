FILENAME       =
SOURCE_FOLDER  =
SOURCE_FILE    = $(SOURCE_FOLDER)$(FILENAME).cpp
BUILD_FILE     = ./build/$(FILENAME)
COMPILER       = g++
COMPILER_FLAGS = -O2 -Wall

default: compile run

compile:
	$(COMPILER) $(COMPILER_FLAGS) $(SOURCE_FILE) -o $(BUILD_FILE)

clean:
	rm -f ./build/*

run:
	$(BUILD_FILE)
