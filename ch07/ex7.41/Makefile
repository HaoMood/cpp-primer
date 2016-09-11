# C++ Primer
# Chap. 7 Ex. 7.41
# Hao Zhang
# 2016.09.11
# Makefile

OBJ = main.o
EXE = main
CXX = g++
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

release: CXXFLAGS += -D NDEBUG
release: clean
release: $(EXE)

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
