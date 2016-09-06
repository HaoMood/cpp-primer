# C++ Primer
# Chap. 6 Ex. 6.33
# Hao Zhang
# 2016.09.03
# Makefile

OBJ = main.o print.o
EXE = main
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	g++ -o $(EXE) $(OBJ)

main.o: print.h
print.o: print.h

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
