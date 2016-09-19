# C++ Primer
# Chap. 9 Ex. 9.51
# Hao Zhang
# 2016.09.19
# Makefile

OBJ = main.o Date.o
EXE = main
CXX = g++
CXXFLAGS = -O0 -std=c++11 -Wall -Wextra -Weffc++ -Werror -pedantic

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: Date.h
Data.o: Date.h

release: clean
release: CXXFLAGS += -D NDEBUG
release: $(EXE)

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
