# C++ Primer
# Chap. 6 Ex. 6.55
# Hao Zhang
# 2016.09.06
# Makefile

OBJ = main.o
EXE = main
CXX = g++
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: arth.h

release: CXXFLAGS += -D NDEBUG
release: clean
release: $(EXE)

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
