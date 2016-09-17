# C++ Primer
# Chap. 9 Ex. 9.15
# Hao Zhang
# 2016.09.17
# Makefile

OBJ = main.o equal.o
EXE = main
CXX = g++
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: equal.h
equal.o: equal.h

release: clean
release: CXXFLAGS += -D NDEBUG
release: $(EXE)

.PHONY = clean
clean: 
	-rm $(EXE) $(OBJ)
