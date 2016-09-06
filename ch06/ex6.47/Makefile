# C++ Primer
# Chap. 6 Ex. 6.47
# Hao Zhang
# 2016.09.06
# Makefile

OBJ = main.o print.o
EXE = main
CXX = g++
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

release: CXXFLAGS += -D NDEBUG
release: clean
release: $(EXE)

main.o: print.h
print.o: print.h

.PHONY = clean
clean: 
	-rm $(EXE) $(OBJ)
