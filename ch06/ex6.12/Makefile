# C++ Primer
# Chap. 6 Ex. 6.12
# Hao Zhang
# 2016.09.01
# ex6.12.cpp

OBJ = main.o swap.o
EXE = main
CXXFLAGS = -std=c++11 -Wall

$(EXE): $(OBJ)
	g++ -o $(EXE) $(OBJ)

main.o: swap.h
swap.o: swap.h

.PHONY: clean
clean:
	-rm $(EXE) $(OBJ)
