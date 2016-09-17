# C++ Primer
# Chap. 9 Ex. 9.28
# Hao Zhang
# 2016.09.17
# Makefile

OBJ = main.o find_insert.o
EXE = main
CXX = g++
CXXFLAGS = -O0 -std=c++11 -Wall -Wextra -Wshadow -pedantic -Weffc++ -Werror

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: find_insert.h
find_insert.o: find_insert.h

release: clearn
release: CXXFLAGS += -D NDEBUG
release: $(EXE)

.PHONY = clean
clean: 
	-rm $(EXE) $(OBJ)
