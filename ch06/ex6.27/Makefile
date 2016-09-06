# C++ Primer
# Chap. 6 Ex. 6.27
# Hao Zhang
# 2016.09.02
# Makefile

OBJ = main.o sum.o
EXE = main
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	g++ -o $(EXE) $(OBJ)

main.o: sum.h
sum.o: sum.h

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
