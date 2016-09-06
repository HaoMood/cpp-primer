# C++ Primer
# Chap. 6 Ex. 6.21
# Hao Zhang
# 2016.09.01
# Makefile

OBJ = main.o max.o
EXE = main
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	g++ -o $(EXE) $(OBJ)

main.o: max.h
max.o: max.h

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
