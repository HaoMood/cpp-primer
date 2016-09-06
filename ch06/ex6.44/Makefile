# C++ Primer
# Chap. 6 Ex. 6.44
# Hao Zhang
# 2016.09.06
# Makefile

OBJ = main.o
EXE = main
CXX = g++
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main: is_shorter.h

.PHONY: clean
clean:
	-rm $(EXE) $(OBJ)
