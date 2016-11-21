# Makefile
# C++ Primer Chap. 12 Ex. 12.6
# Hao Zhang
# 2016.11.20  Frist release

SRC := $(shell find src/ -type f -name '*.cpp' 2> /dev/null)
OBJ := $(patsubst src/%,.build/%,$(SRC:.cpp=.o))
MAIN := bin/main

CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra -Weffc++ -Werror -pedantic
DEBUG := -O0
RELEASE := -O3 -D NDEBUG
LIB :=

main: ${OBJ}
	$(CXX) $(CXXFLAGS) $(DEBUG) -o $(MAIN) $^ -Iinclude/ $(LIB)
	-rm a.out 2> /dev/null

release: ${SRC}
	$(CXX) $(CXXFLAGS) $(RELEASE) -o $(MAIN) $^ -Iinclude/ $(LIB)
	-rm a.out 2> /dev/null

.build/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) $(DEBUG) -c -o $@ $< -Iinclude/ $(LIB)

init: 
	mkdir .build src include bin

.PHONY = clean
clean:
	-rm $(OBJ) $(MAIN)
