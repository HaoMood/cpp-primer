# C++ Primer
# Chap. 6 Ex. 6.42
# Hao Zhang
# 2016.09.06
# Makefile

OBJ = main.o make_plural.o
EXE = main
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	g++ -o $(EXE) $(OBJ)

main.o: make_plural.h
make_plural.o: make_plural.h

.PHONY = clean
clean: 
	-rm $(EXE) $(OBJ)
