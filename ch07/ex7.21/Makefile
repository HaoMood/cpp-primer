# C++ Primer
# Chap. 7 Ex. 7.21
# Hao Zhang
# 2016.09.08
# Makefile

OBJ = main.o Sales_data.o
EXE = main
CXX = g++
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: Sales_data.h
Sales_data.o: Sales_data.h

release: CXXFLAGS += -D NDEBUG
release: clean
release: $(EXE)

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
