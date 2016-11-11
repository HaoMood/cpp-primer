# Makefile
# C++ Primer Chap. 10 Ex. 10.1
# Hao Zhang
# 2016.11.10  Frist release

SRC := $(shell find src/ -type f -name '*.cpp')
OBJ := $(patsubst src/%,build/%,$(SRC:.cpp=.o))
MAIN := bin/main

CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra -Weffc++ -Werror -pedantic
DEBUG := -O0
RELEASE := -O3 -D NDEBUG
LIB :=

main: ${OBJ}
	$(CXX) $(CXXFLAGS) $(DEBUG) -o $(MAIN) $^ -Iinclude/ $(LIB)

release: ${SRC}
	$(CXX) $(CXXFLAGS) $(RELEASE) -o $(MAIN) $^ -Iinclude/ $(LIB)

build/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) $(DEBUG) -c -o $@ $< -Iinclude/ $(LIB)

.PHONY = clean
clean:
	-rm $(OBJ) $(MAIN)
