# C++ Primer
# Chap. 6 Ex. 6.22
# Hao Zhang
# 2016.09.01
# Makefile

OBJ = main.o swap.o
EXE = main
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	g++ -o $(EXE) $(OBJ)

main.o: swap.h
swap.o: swap.h

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
