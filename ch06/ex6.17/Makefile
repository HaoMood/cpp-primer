# C++ Primer
# Chap. 6 Ex. 6.17
# Hao Zhang
# 2016.09.01
# ex6.17.cpp

OBJ = main.o contain_capital.o lower.o
EXE = main
CXXFLAGS = -std=c++11 -Wall

$(EXE): $(OBJ)
	g++ -o $(EXE) $(OBJ)

main.o: str.h
contain_capital.o: str.h
lower.o: str.h

.PHONY: clean
clean:
	-rm $(EXE) $(OBJ)
