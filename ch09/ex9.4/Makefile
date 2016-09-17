# C++ Primer
# Chap. 9 Ex. 9.4
# Hao Zhang
# 2016.09.14
# Makefile

OBJ = main.o find.o
EXE = main
CXX = g++
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: find.h
find.o: find.h

release: clean
release: CXXFLAGS += -D NDEBUG
release: $(EXE)

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
