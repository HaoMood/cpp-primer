# C++ Primer
# Chap. 7 Ex. 7.23
# Hao Zhang
# 2016.09.08
# Makefile

OBJ = main.o Screen.o
EXE = main
CXX = g++
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: Screen.h
Screen.o: Screen.h

release: CXXFLAGS += -D NDEBUG
release: clean
release: $(EXE)

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
