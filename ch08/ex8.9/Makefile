# C++ Primer
# Chap. 8 Ex. 8.1
# Hao Zhang
# 2016.09.13
# Makefile

OBJ = main.o read_and_print.o
EXE = main
CXX = g++
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: read_and_print.h
read_and_print.o: read_and_print.h

release: clean
release: CXXFLAGS += -D NDEBUG
release: $(EXE)

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
