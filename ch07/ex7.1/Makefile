# C++ Primer
# Chap. 7 Ex. 7.1
# Hao Zhang
# 2016.09.07
# Makefile

OBJ = main.o
EXE = main
CXX = g++
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: Sales_data.h

release: CXXFLAGS += -D NDEBUG
release: clean
release: $(EXE)

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
